/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessagePartChatItem.h>
#import <IMCore/IMPluginChatItemProtocol.h>

@class NSString, IMBalloonPluginDataSource, IMPluginPayload;

@interface IMTranscriptPluginChatItem : IMMessagePartChatItem <IMPluginChatItemProtocol> {

	BOOL _isLastChatItemOfPluginType;
	BOOL _hasSetIsLastChatItemOfPluginType;
	BOOL _parentChatHasKnownParticipants;
	IMPluginPayload* _initialPayload;
	NSString* _bundleIdentifier;
	IMBalloonPluginDataSource* _dataSource;

}

@property (nonatomic,retain) IMBalloonPluginDataSource * dataSource;                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) IMPluginPayload * initialPayload;                                                 //@synthesize initialPayload=_initialPayload - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSetIsLastChatItemOfPluginType;                                            //@synthesize hasSetIsLastChatItemOfPluginType=_hasSetIsLastChatItemOfPluginType - In the implementation block
@property (nonatomic,readonly) BOOL isDataSourceInitialized; 
@property (nonatomic,readonly) NSString * pluginSessionGUID; 
@property (nonatomic,readonly) unsigned long long playbackType; 
@property (assign,setter=setLastChatItemOfPluginType:,nonatomic) BOOL isLastChatItemOfPluginType;              //@synthesize isLastChatItemOfPluginType=_isLastChatItemOfPluginType - In the implementation block
@property (nonatomic,readonly) BOOL parentChatHasKnownParticipants;                                            //@synthesize parentChatHasKnownParticipants=_parentChatHasKnownParticipants - In the implementation block
@property (nonatomic,readonly) BOOL isPlayed; 
@property (nonatomic,readonly) BOOL isSaved; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,readonly) BOOL isFromMe; 
-(Class)__ck_chatItemClass;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(IMBalloonPluginDataSource *)dataSource;
-(void)setDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(BOOL)isPlayed;
-(NSString *)pluginSessionGUID;
-(unsigned long long)playbackType;
-(BOOL)isSaved;
-(BOOL)wantsAutoPlayback;
-(BOOL)isDataSourceInitialized;
-(id)_initWithItem:(id)arg1 initialPayload:(id)arg2 messagePartRange:(NSRange)arg3 parentChatHasKnownParticipants:(BOOL)arg4 ;
-(IMPluginPayload *)initialPayload;
-(BOOL)parentChatHasKnownParticipants;
-(void)setInitialPayload:(IMPluginPayload *)arg1 ;
-(BOOL)hasSetIsLastChatItemOfPluginType;
-(BOOL)isLastChatItemOfPluginType;
-(void)setLastChatItemOfPluginType:(BOOL)arg1 ;
-(void)setHasSetIsLastChatItemOfPluginType:(BOOL)arg1 ;
@end

