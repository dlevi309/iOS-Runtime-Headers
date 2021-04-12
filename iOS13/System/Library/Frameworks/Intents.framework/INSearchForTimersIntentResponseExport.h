/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray;


@protocol INSearchForTimersIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * matchedTimers; 
@property (nonatomic,copy) NSArray * unmatchedTimers; 
@required
-(long long)code;
-(NSArray *)matchedTimers;
-(void)setMatchedTimers:(id)arg1;
-(NSArray *)unmatchedTimers;
-(void)setUnmatchedTimers:(id)arg1;

@end

