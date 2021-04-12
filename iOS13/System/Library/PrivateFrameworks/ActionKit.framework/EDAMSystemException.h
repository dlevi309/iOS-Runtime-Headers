/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSNumber *)errorCode;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(NSNumber *)rateLimitDuration;
-(void)setRateLimitDuration:(NSNumber *)arg1 ;
@end

