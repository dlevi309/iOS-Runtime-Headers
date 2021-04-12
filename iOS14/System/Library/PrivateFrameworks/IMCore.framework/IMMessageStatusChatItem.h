/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>
#import <IMCore/IMChatTranscriptStatusItem.h>

@class NSDate, NSString, NSAttributedString, IMServiceImpl, IMHandle;

@interface IMMessageStatusChatItem : IMTranscriptChatItem <IMChatTranscriptStatusItem> {

	long long _statusType;
	NSDate* _time;
	long long _expireStatusType;
	NSDate* _timeAdded;
	NSDate* _timeStale;
	unsigned long long _count;

}

@property (nonatomic,readonly) long long messageStatusType; 
@property (nonatomic,readonly) long long statusType;                                  //@synthesize statusType=_statusType - In the implementation block
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) NSDate * time;                                         //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) NSString * errorText; 
@property (nonatomic,readonly) long long expireStatusType;                            //@synthesize expireStatusType=_expireStatusType - In the implementation block
@property (nonatomic,readonly) NSDate * dateOfStatus; 
@property (getter=isFromMe,nonatomic,readonly) BOOL fromMe; 
@property (nonatomic,readonly) BOOL wantsTail; 
@property (nonatomic,copy,readonly) NSAttributedString * transcriptText; 
@property (nonatomic,readonly) NSDate * transcriptDate; 
@property (nonatomic,readonly) IMServiceImpl * service; 
@property (nonatomic,readonly) IMHandle * handle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)__ck_chatItemClass;
-(NSDate *)time;
-(NSString *)errorText;
-(long long)statusType;
-(unsigned long long)count;
-(NSString *)description;
-(long long)expireStatusType;
-(long long)messageStatusType;
-(BOOL)isFromMe;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4 expireStatusType:(long long)arg5 ;
-(NSDate *)dateOfStatus;
-(id)_timeStale;
-(id)_timeAdded;
-(void)_setTimeAdded:(id)arg1 ;
-(id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4 ;
-(id)_initWithItem:(id)arg1 expireStatusType:(long long)arg2 count:(unsigned long long)arg3 ;
@end

