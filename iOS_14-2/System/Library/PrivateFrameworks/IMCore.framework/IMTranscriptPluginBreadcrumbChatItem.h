/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)__ck_chatItemClass;
-(NSString *)statusText;
-(IMBalloonPluginDataSource *)dataSource;
-(unsigned long long)optionFlags;
-(void)setDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(BOOL)isFromMe;
-(NSString *)type;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithItem:(id)arg1 datasource:(id)arg2 statusText:(id)arg3 optionFlags:(unsigned long long)arg4 ;
-(void)configureStatusTextWithAccount:(id)arg1 ;
-(NSString *)rawStatusText;
@end

