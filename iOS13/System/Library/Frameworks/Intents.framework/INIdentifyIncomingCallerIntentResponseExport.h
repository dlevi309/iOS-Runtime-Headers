/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray;


@protocol INIdentifyIncomingCallerIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (assign,nonatomic) long long statusCode; 
@property (nonatomic,copy) NSArray * callRecords; 
@required
-(long long)code;
-(long long)statusCode;
-(void)setStatusCode:(long long)arg1;
-(NSArray *)callRecords;
-(void)setCallRecords:(id)arg1;

@end

