/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMMessageStatusChatItem.h>

@class IMBalloonPluginDataSource;

@interface IMTranscriptPluginStatusChatItem : IMMessageStatusChatItem {

	IMBalloonPluginDataSource* _dataSource;

}

@property (nonatomic,readonly) IMBalloonPluginDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(IMBalloonPluginDataSource *)dataSource;
-(id)_initWithItem:(id)arg1 dataSource:(id)arg2 ;
@end

