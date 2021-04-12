/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMTypingChatItem.h>
#import <IMCore/IMPluginChatItemProtocol.h>

@class NSData, IMBalloonPluginDataSource, NSString;

@interface IMTypingPluginChatItem : IMTypingChatItem <IMPluginChatItemProtocol> {

	NSData* _typingIndicatorIcon;
	IMBalloonPluginDataSource* _dataSource;

}

@property (nonatomic,retain) IMBalloonPluginDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSData * typingIndicatorIcon;                      //@synthesize typingIndicatorIcon=_typingIndicatorIcon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,readonly) BOOL isFromMe; 
-(Class)__ck_chatItemClass;
-(NSString *)type;
-(IMBalloonPluginDataSource *)dataSource;
-(void)setDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(NSData *)typingIndicatorIcon;
-(id)_initWithItem:(id)arg1 dataSource:(id)arg2 ;
@end

