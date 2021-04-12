/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)isMockRecordId:(id)arg1 ;
+(id)createRealtimeReminder:(id)arg1 error:(id*)arg2 ;
+(BOOL)isMockSuggestion:(id)arg1 ;
+(id)originFromRecordId:(id)arg1 ;
+(id)contactMatchesWithContact:(id)arg1 ;
+(void)cleanupAfterMockSuggestion:(id)arg1 ;
@end

