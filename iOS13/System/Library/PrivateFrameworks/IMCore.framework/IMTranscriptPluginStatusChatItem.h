/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

