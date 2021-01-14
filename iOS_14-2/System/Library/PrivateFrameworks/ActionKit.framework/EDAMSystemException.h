/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATException.h>

@class NSNumber, NSString;

@interface EDAMSystemException : FATException {

	NSNumber* _errorCode;
	NSString* _message;
	NSNumber* _rateLimitDuration;

}

@property (nonatomic,retain) NSNumber * errorCode;                      //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,retain) NSString * message;                        //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSNumber * rateLimitDuration;              //@synthesize rateLimitDuration=_rateLimitDuration - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSNumber *)errorCode;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(NSNumber *)rateLimitDuration;
-(void)setRateLimitDuration:(NSNumber *)arg1 ;
@end

