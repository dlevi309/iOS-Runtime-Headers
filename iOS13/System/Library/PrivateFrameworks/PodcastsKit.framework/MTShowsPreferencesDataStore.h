/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


#import <PodcastsKit/PodcastsKit-Structs.h>
@interface MTShowsPreferencesDataStore : NSObject

@property (assign,nonatomic) long long sortOrder; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
+(id)sortDescriptorsForSortType:(long long)arg1 ;
-(id)sortDescriptors;
-(long long)sortOrder;
-(void)setSortOrder:(long long)arg1 ;
-(long long)_sortTypeForString:(id)arg1 ;
-(id)_stringForSortType:(long long)arg1 ;
@end

