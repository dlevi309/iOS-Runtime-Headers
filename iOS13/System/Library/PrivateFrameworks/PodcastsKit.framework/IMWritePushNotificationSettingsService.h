/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/IMPushNotificationSettingsService.h>

@class NSData;

@interface IMWritePushNotificationSettingsService : IMPushNotificationSettingsService {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)urlRequestWithError:(id*)arg1 ;
@end

