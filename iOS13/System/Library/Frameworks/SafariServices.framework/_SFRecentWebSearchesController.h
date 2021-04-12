/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariShared/WBSRecentWebSearchesController.h>

@class NSString;

@interface _SFRecentWebSearchesController : WBSRecentWebSearchesController {

	NSString* _pathToLegacySearchesFile;

}
+(unsigned long long)_maximumNumberOfSearchesToTrack;
-(void)_removeLegacyRecentSearchesData;
-(id)initWithPathToLegacySearchesFile:(id)arg1 ;
-(void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2 ;
-(id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1 ;
-(void)_migrateLegacyData;
@end

