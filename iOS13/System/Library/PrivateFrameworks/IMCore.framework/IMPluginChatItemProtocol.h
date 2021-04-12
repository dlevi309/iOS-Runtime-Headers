/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

@class NSString, IMBalloonPluginDataSource;


@protocol IMPluginChatItemProtocol <NSObject>
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,retain,readonly) IMBalloonPluginDataSource * dataSource; 
@property (nonatomic,readonly) BOOL isFromMe; 
@required
-(NSString *)type;
-(IMBalloonPluginDataSource *)dataSource;
-(BOOL)isFromMe;

@end

