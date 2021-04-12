/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CSSearchQuery.h>

@class NSArray, NSString;

@interface CSUserQuery : CSSearchQuery {

	NSArray* _filterQueries;
	NSArray* _bundleIDs;

}

@property (copy) NSArray * filterQueries;                            //@synthesize filterQueries=_filterQueries - In the implementation block
@property (readonly) NSString * keyboardLanguage; 
@property (copy) NSArray * protectionClasses; 
@property (nonatomic,copy) NSArray * bundleIDs;                      //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (readonly) unsigned long long foundItemCount; 
-(void)cancel;
-(void)start;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(id)initWithQueryString:(id)arg1 context:(id)arg2 ;
-(NSString *)keyboardLanguage;
-(id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 attributes:(id)arg3 ;
-(NSArray *)filterQueries;
-(void)setFilterQueries:(NSArray *)arg1 ;
@end

