/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <PodcastsFoundation/IMPushNotificationSettingsService.h>

@class NSData;

@interface IMWritePushNotificationSettingsService : IMPushNotificationSettingsService {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
-(id)urlRequest;
-(id)initWithData:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
@end

