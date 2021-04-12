/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@interface SGRealtimeSuggestionMock : NSObject
+(id)loadFromFile:(id)arg1 error:(id*)arg2 ;
+(id)parseJson:(id)arg1 error:(id*)arg2 ;
+(id)parseData:(id)arg1 error:(id*)arg2 ;
+(id)contactDetailsFromData:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)dateFromObject:(id)arg1 error:(id*)arg2 ;
+(id)createSuggestion:(id)arg1 error:(id*)arg2 ;
+(id)createRealtimeContact:(id)arg1 error:(id*)arg2 ;
+(id)createRealtimeEvent:(id)arg1 error:(id*)arg2 ;
+(BOOL)isMockSuggestion:(id)arg1 ;
+(id)originFromRecordId:(id)arg1 ;
+(id)contactMatchesWithContact:(id)arg1 ;
+(void)cleanupAfterMockSuggestion:(id)arg1 ;
@end

