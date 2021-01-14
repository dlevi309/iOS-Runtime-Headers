/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMTranscriptChatItem.h>

@interface IMReportSpamChatItem : IMTranscriptChatItem {

	BOOL _wasReportedAsSpam;
	BOOL _isGroupMessage;
	BOOL _hasMultipleMessages;
	BOOL _showReportSMSSpam;

}

@property (nonatomic,readonly) BOOL wasReportedAsSpam;                //@synthesize wasReportedAsSpam=_wasReportedAsSpam - In the implementation block
@property (nonatomic,readonly) BOOL isGroupMessage;                   //@synthesize isGroupMessage=_isGroupMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasMultipleMessages;              //@synthesize hasMultipleMessages=_hasMultipleMessages - In the implementation block
@property (nonatomic,readonly) BOOL showReportSMSSpam;                //@synthesize showReportSMSSpam=_showReportSMSSpam - In the implementation block
-(Class)__ck_chatItemClass;
-(BOOL)isGroupMessage;
-(BOOL)hasMultipleMessages;
-(BOOL)showReportSMSSpam;
-(id)_initWithItem:(id)arg1 wasReportedAsSpam:(BOOL)arg2 isGroup:(BOOL)arg3 hasMultipleMessages:(BOOL)arg4 showReportSMSSpam:(BOOL)arg5 ;
-(BOOL)wasReportedAsSpam;
@end

