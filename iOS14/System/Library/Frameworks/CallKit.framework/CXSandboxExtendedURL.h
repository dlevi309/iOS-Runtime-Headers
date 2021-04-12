/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface CXSandboxExtendedURL : NSObject <NSSecureCoding, NSCopying> {

	long long _sandboxExtensionHandle;
	NSURL* _URL;
	NSString* _sandboxExtensionToken;

}

@property (nonatomic,retain) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * sandboxExtensionToken;                //@synthesize sandboxExtensionToken=_sandboxExtensionToken - In the implementation block
@property (assign,nonatomic) long long sandboxExtensionHandle;              //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSString *)sandboxExtensionToken;
-(void)setSandboxExtensionToken:(NSString *)arg1 ;
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)sandboxExtensionHandle;
-(id)description;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToSandboxExtendedURL:(id)arg1 ;
@end

