/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)extensionIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(long long)invocationNumber;
-(id)initWithExtensionIdentifier:(id)arg1 invocationNumber:(long long)arg2 ;
-(void)setInvocationNumber:(long long)arg1 ;
@end

