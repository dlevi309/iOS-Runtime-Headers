/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, INConnectedCall;


@protocol INAnswerCallIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (assign,nonatomic) long long statusCode; 
@property (nonatomic,copy) NSArray * callRecords; 
@property (nonatomic,copy) INConnectedCall * answeredCall; 
@required
-(void)setAnsweredCall:(id)arg1;
-(NSArray *)callRecords;
-(void)setStatusCode:(long long)arg1;
-(void)setCallRecords:(id)arg1;
-(long long)statusCode;
-(long long)code;
-(INConnectedCall *)answeredCall;

@end

