/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariShared/WBSRecentWebSearchesController.h>

@class NSString;

@interface _SFRecentWebSearchesController : WBSRecentWebSearchesController {

	NSString* _pathToLegacySearchesFile;

}
+(unsigned long long)_maximumNumberOfSearchesToTrack;
-(id)initWithPathToLegacySearchesFile:(id)arg1 ;
-(void)_removeLegacyRecentSearchesData;
-(void)_migrateLegacyData;
-(void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2 ;
-(id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1 ;
@end

