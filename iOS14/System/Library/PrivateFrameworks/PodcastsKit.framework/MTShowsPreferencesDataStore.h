/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


#import <PodcastsKit/PodcastsKit-Structs.h>
@interface MTShowsPreferencesDataStore : NSObject

@property (assign,nonatomic) long long sortOrder; 
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sortDescriptorsForSortType:(long long)arg1 ;
-(long long)sortOrder;
-(id)sortDescriptors;
-(void)setSortOrder:(long long)arg1 ;
-(long long)_sortTypeForString:(id)arg1 ;
-(id)_stringForSortType:(long long)arg1 ;
@end

