/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


#import <PodcastsKit/PodcastsKit-Structs.h>
@interface MTSingletonHolder : NSObject {

	os_unfair_lock_s _lock;
	id _instance;

}

@property (nonatomic,retain) id instance;              //@synthesize instance=_instance - In the implementation block
-(void)setInstance:(id)arg1 ;
-(id)instance;
@end

