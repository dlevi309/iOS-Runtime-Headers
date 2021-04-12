/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <libobjc.A.dylib/DEDSecureArchiving.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DEDExtensionIdentifier : NSObject <DEDSecureArchiving, NSSecureCoding> {

	NSString* _extensionIdentifier;
	long long _invocationNumber;

}

@property (retain) NSString * extensionIdentifier;                  //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (assign) long long invocationNumber;                      //@synthesize invocationNumber=_invocationNumber - In the implementation block
@property (readonly) NSString * stringValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)log;
+(id)archivedClasses;
+(id)parseDEDIdentifierString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithString:(id)arg1 ;
-(NSString *)extensionIdentifier;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(long long)invocationNumber;
-(id)initWithExtensionIdentifier:(id)arg1 invocationNumber:(long long)arg2 ;
-(void)setInvocationNumber:(long long)arg1 ;
@end

