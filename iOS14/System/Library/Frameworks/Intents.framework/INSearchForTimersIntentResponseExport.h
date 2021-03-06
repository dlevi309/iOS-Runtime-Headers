/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray;


@protocol INSearchForTimersIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * matchedTimers; 
@property (nonatomic,copy) NSArray * unmatchedTimers; 
@required
-(NSArray *)matchedTimers;
-(void)setMatchedTimers:(id)arg1;
-(NSArray *)unmatchedTimers;
-(void)setUnmatchedTimers:(id)arg1;
-(long long)code;

@end

