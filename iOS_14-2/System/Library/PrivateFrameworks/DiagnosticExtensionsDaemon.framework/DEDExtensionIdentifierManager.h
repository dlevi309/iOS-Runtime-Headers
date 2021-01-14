/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@class NSMutableDictionary, NSString;

@interface DEDExtensionIdentifierManager : NSObject <NSSecureCoding, DEDSecureArchiving> {

	NSMutableDictionary* _identifierTable;

}

@property (nonatomic,retain) NSMutableDictionary * identifierTable;              //@synthesize identifierTable=_identifierTable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)log;
+(id)archivedClasses;
-(id)allIdentifiers;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)reset;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isKnownIdentifier:(id)arg1 ;
-(id)identifierForExtensionIdentifier:(id)arg1 ;
-(id)knownIdentifiersForExtensionIdentifier:(id)arg1 ;
-(void)revokeIdentifier:(id)arg1 ;
-(id)initWithExtensionIdentifiers:(id)arg1 ;
-(void)setIdentifierTable:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierTable;
@end

