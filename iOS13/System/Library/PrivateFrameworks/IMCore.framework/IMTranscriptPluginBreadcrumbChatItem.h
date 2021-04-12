/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMTranscriptChatItem.h>
#import <IMCore/IMPluginChatItemProtocol.h>

@class IMBalloonPluginDataSource, NSString;

@interface IMTranscriptPluginBreadcrumbChatItem : IMTranscriptChatItem <IMPluginChatItemProtocol> {

	IMBalloonPluginDataSource* _dataSource;
	NSString* _rawStatusText;
	NSString* _statusText;
	unsigned long long _optionFlags;

}

@property (nonatomic,readonly) NSString * rawStatusText;                          //@synthesize rawStatusText=_rawStatusText - In the implementation block
@property (nonatomic,retain) IMBalloonPluginDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSString * statusText;                             //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,readonly) unsigned long long optionFlags;                    //@synthesize optionFlags=_optionFlags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,readonly) BOOL isFromMe; 
-(Class)__ck_chatItemClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)type;
-(IMBalloonPluginDataSource *)dataSource;
-(void)setDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(BOOL)isFromMe;
-(NSString *)statusText;
-(unsigned long long)optionFlags;
-(id)_initWithItem:(id)arg1 datasource:(id)arg2 statusText:(id)arg3 optionFlags:(unsigned long long)arg4 ;
-(void)configureStatusTextWithAccount:(id)arg1 ;
-(NSString *)rawStatusText;
@end

