/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(id)allIdentifiers;
-(BOOL)isKnownIdentifier:(id)arg1 ;
-(id)identifierForExtensionIdentifier:(id)arg1 ;
-(id)knownIdentifiersForExtensionIdentifier:(id)arg1 ;
-(void)revokeIdentifier:(id)arg1 ;
-(id)initWithExtensionIdentifiers:(id)arg1 ;
-(void)setIdentifierTable:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierTable;
@end

