/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <Intents/INIntentResponse.h>

@class NSArray, NSNumber;

@interface WFMatchTextGetGroupIntentResponse : INIntentResponse {

	long long _code;

}

@property (assign,nonatomic) long long code;                              //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSArray * text; 
@property (nonatomic,copy) NSNumber * noMatchIndex; 
@property (nonatomic,copy) NSNumber * rangeErrorGroupNumber; 
@property (nonatomic,copy) NSNumber * rangeErrorGroupCount; 
+(id)noMatchIntentResponseWithNoMatchIndex:(id)arg1 ;
+(id)rangeErrorIntentResponseWithRangeErrorGroupNumber:(id)arg1 rangeErrorGroupCount:(id)arg2 ;
-(long long)code;
-(void)setCode:(long long)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
@end

