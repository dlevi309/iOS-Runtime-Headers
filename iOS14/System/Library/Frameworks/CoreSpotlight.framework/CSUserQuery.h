/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CSSearchQuery.h>

@class NSArray, NSString;

@interface CSUserQuery : CSSearchQuery

@property (copy) NSArray * filterQueries; 
@property (readonly) NSString * keyboardLanguage; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (readonly) unsigned long long foundItemCount; 
-(NSArray *)filterQueries;
-(id)initWithQueryString:(id)arg1 context:(id)arg2 ;
-(NSString *)keyboardLanguage;
-(void)setFilterQueries:(NSArray *)arg1 ;
-(void)start;
-(id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 attributes:(id)arg3 ;
-(void)cancel;
@end

