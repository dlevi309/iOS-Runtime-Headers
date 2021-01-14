/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface ASDManagedRequestStatus : NSObject <NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSUUID* _requestIdentifier;
	long long _state;
	NSString* _title;

}

@property (retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (retain) NSString * bundleVersion;                 //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (retain) NSUUID * requestIdentifier;               //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign) long long state;                          //@synthesize state=_state - In the implementation block
@property (retain) NSString * title;                         //@synthesize title=_title - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)requestIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setState:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(NSString *)title;
@end

