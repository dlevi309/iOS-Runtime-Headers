/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface APSDNSRequest : NSObject <NSSecureCoding> {

	NSString* _hostname;
	double _timeout;
	/*^block*/id _responseBlock;
	NSString* _environment;
	long long _flags;
	NSDate* _requestStartTime;

}

@property (nonatomic,copy,readonly) NSString * hostname;              //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,readonly) double timeout;                        //@synthesize timeout=_timeout - In the implementation block
@property (copy,readonly) id responseBlock;                           //@synthesize responseBlock=_responseBlock - In the implementation block
@property (nonatomic,retain) NSString * environment;                  //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) NSDate * requestStartTime;               //@synthesize requestStartTime=_requestStartTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(double)timeout;
-(NSString *)hostname;
-(id)responseBlock;
-(NSDate *)requestStartTime;
-(void)setRequestStartTime:(NSDate *)arg1 ;
-(id)initWithHostname:(id)arg1 timeoutInSeconds:(double)arg2 requestFlags:(long long)arg3 responseBlock:(/*^block*/id)arg4 ;
@end

