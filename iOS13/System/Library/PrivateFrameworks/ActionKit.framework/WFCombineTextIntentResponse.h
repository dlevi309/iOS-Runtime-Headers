/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <Intents/INIntentResponse.h>

@class NSString;

@interface WFCombineTextIntentResponse : INIntentResponse {

	long long _code;

}

@property (assign,nonatomic) long long code;              //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSString * text; 
-(long long)code;
-(void)setCode:(long long)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
@end

