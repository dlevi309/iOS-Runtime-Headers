/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <DiagnosticExtensionsDaemon/DiagnosticExtensionsDaemon-Structs.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, DEDExtensionIdentifier;

@interface DEDExtension : NSObject <DEDSecureArchiving, NSCopying> {

	NSString* _identifier;
	DEDExtensionIdentifier* _dedExtensionIdentifier;
	NSString* _name;

}

@property (retain) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (retain) DEDExtensionIdentifier * dedExtensionIdentifier;              //@synthesize dedExtensionIdentifier=_dedExtensionIdentifier - In the implementation block
@property (retain) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivedClasses;
+(id)extensionWithDEExtension:(id)arg1 ;
+(id)extensionWithDicionary:(id)arg1 ;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)serialize;
-(DEDExtensionIdentifier *)dedExtensionIdentifier;
-(void)setDedExtensionIdentifier:(DEDExtensionIdentifier *)arg1 ;
@end

