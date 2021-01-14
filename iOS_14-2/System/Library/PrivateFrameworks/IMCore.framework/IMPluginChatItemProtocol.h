/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

@class NSString, IMBalloonPluginDataSource;


@protocol IMPluginChatItemProtocol <NSObject>
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,retain,readonly) IMBalloonPluginDataSource * dataSource; 
@property (nonatomic,readonly) BOOL isFromMe; 
@required
-(IMBalloonPluginDataSource *)dataSource;
-(BOOL)isFromMe;
-(NSString *)type;

@end

