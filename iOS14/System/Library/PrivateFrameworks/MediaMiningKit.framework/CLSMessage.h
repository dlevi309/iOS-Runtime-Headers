/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class NSDate, NSString, NSData, NSNumber;

@interface CLSMessage : NSObject {

	BOOL _hasAttachments;
	NSDate* _date;
	NSString* _recipientHandle;
	IMDMessageRecordStructRef _messageRecord;
	long long _type;
	long long _rowID;
	long long _replaceID;
	NSString* _fzGuid;
	long long _fzDate;
	long long _fzDateRead;
	long long _fzDateDelivered;
	long long _fzDatePlayed;
	NSString* _fzBody;
	NSData* _fzAttributedBody;
	NSNumber* _fzFlags;
	NSString* _fzService;
	NSString* _fzAccount;
	NSString* _fzAccountGUID;
	long long _handleID;
	NSString* _fzSubject;
	long long _fzError;
	long long _fzType;
	NSString* _roomnames;
	long long _otherHandleID;
	NSString* _groupTitle;
	long long _groupActionType;
	long long _shareStatus;
	long long _shareDirection;
	long long _expireState;
	long long _messageActionType;
	NSString* _associatedMessageGUID;
	long long _associatedMessageType;
	NSString* _balloonBundleID;
	NSData* _payloadData;
	NSString* _expressiveSendStyleID;
	long long _timeExpressiveSendPlayed;
	NSData* _messageSummaryInfo;
	NSString* _destinationCallerID;
	NSRange _associatedMessageRange;

}

@property (nonatomic,readonly) IMDMessageRecordStructRef messageRecord;              //@synthesize messageRecord=_messageRecord - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * recipientHandle;                           //@synthesize recipientHandle=_recipientHandle - In the implementation block
@property (nonatomic,readonly) long long type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasAttachments;                                  //@synthesize hasAttachments=_hasAttachments - In the implementation block
@property (nonatomic,readonly) long long rowID;                                      //@synthesize rowID=_rowID - In the implementation block
@property (nonatomic,readonly) long long replaceID;                                  //@synthesize replaceID=_replaceID - In the implementation block
@property (nonatomic,readonly) long long fzDate;                                     //@synthesize fzDate=_fzDate - In the implementation block
@property (nonatomic,readonly) long long fzDateRead;                                 //@synthesize fzDateRead=_fzDateRead - In the implementation block
@property (nonatomic,readonly) long long fzDateDelivered;                            //@synthesize fzDateDelivered=_fzDateDelivered - In the implementation block
@property (nonatomic,readonly) long long fzDatePlayed;                               //@synthesize fzDatePlayed=_fzDatePlayed - In the implementation block
@property (nonatomic,readonly) long long handleID;                                   //@synthesize handleID=_handleID - In the implementation block
@property (nonatomic,readonly) long long fzError;                                    //@synthesize fzError=_fzError - In the implementation block
@property (nonatomic,readonly) long long fzType;                                     //@synthesize fzType=_fzType - In the implementation block
@property (nonatomic,readonly) long long otherHandleID;                              //@synthesize otherHandleID=_otherHandleID - In the implementation block
@property (nonatomic,readonly) long long groupActionType;                            //@synthesize groupActionType=_groupActionType - In the implementation block
@property (nonatomic,readonly) long long shareStatus;                                //@synthesize shareStatus=_shareStatus - In the implementation block
@property (nonatomic,readonly) long long shareDirection;                             //@synthesize shareDirection=_shareDirection - In the implementation block
@property (nonatomic,readonly) long long expireState;                                //@synthesize expireState=_expireState - In the implementation block
@property (nonatomic,readonly) long long messageActionType;                          //@synthesize messageActionType=_messageActionType - In the implementation block
@property (nonatomic,readonly) long long associatedMessageType;                      //@synthesize associatedMessageType=_associatedMessageType - In the implementation block
@property (nonatomic,readonly) long long timeExpressiveSendPlayed;                   //@synthesize timeExpressiveSendPlayed=_timeExpressiveSendPlayed - In the implementation block
@property (nonatomic,readonly) NSRange associatedMessageRange;                       //@synthesize associatedMessageRange=_associatedMessageRange - In the implementation block
@property (nonatomic,readonly) NSData * fzAttributedBody;                            //@synthesize fzAttributedBody=_fzAttributedBody - In the implementation block
@property (nonatomic,readonly) NSData * payloadData;                                 //@synthesize payloadData=_payloadData - In the implementation block
@property (nonatomic,readonly) NSData * messageSummaryInfo;                          //@synthesize messageSummaryInfo=_messageSummaryInfo - In the implementation block
@property (nonatomic,readonly) NSNumber * fzFlags;                                   //@synthesize fzFlags=_fzFlags - In the implementation block
@property (nonatomic,readonly) NSString * fzGuid;                                    //@synthesize fzGuid=_fzGuid - In the implementation block
@property (nonatomic,readonly) NSString * fzBody;                                    //@synthesize fzBody=_fzBody - In the implementation block
@property (nonatomic,readonly) NSString * fzService;                                 //@synthesize fzService=_fzService - In the implementation block
@property (nonatomic,readonly) NSString * fzAccount;                                 //@synthesize fzAccount=_fzAccount - In the implementation block
@property (nonatomic,readonly) NSString * fzAccountGUID;                             //@synthesize fzAccountGUID=_fzAccountGUID - In the implementation block
@property (nonatomic,readonly) NSString * fzSubject;                                 //@synthesize fzSubject=_fzSubject - In the implementation block
@property (nonatomic,readonly) NSString * roomnames;                                 //@synthesize roomnames=_roomnames - In the implementation block
@property (nonatomic,readonly) NSString * groupTitle;                                //@synthesize groupTitle=_groupTitle - In the implementation block
@property (nonatomic,readonly) NSString * associatedMessageGUID;                     //@synthesize associatedMessageGUID=_associatedMessageGUID - In the implementation block
@property (nonatomic,readonly) NSString * balloonBundleID;                           //@synthesize balloonBundleID=_balloonBundleID - In the implementation block
@property (nonatomic,readonly) NSString * expressiveSendStyleID;                     //@synthesize expressiveSendStyleID=_expressiveSendStyleID - In the implementation block
@property (nonatomic,readonly) NSString * destinationCallerID;                       //@synthesize destinationCallerID=_destinationCallerID - In the implementation block
+(void)enumerateAllMessagesWithBlock:(/*^block*/id)arg1 ;
-(long long)rowID;
-(id)attachments;
-(NSData *)payloadData;
-(long long)handleID;
-(NSString *)balloonBundleID;
-(BOOL)hasAttachments;
-(id)debugDescription;
-(NSString *)expressiveSendStyleID;
-(long long)associatedMessageType;
-(BOOL)fromMe;
-(NSString *)fzBody;
-(NSString *)fzGuid;
-(long long)fzDate;
-(long long)fzType;
-(long long)shareStatus;
-(long long)shareDirection;
-(long long)expireState;
-(NSData *)messageSummaryInfo;
-(NSRange)associatedMessageRange;
-(long long)messageActionType;
-(long long)type;
-(NSNumber *)fzFlags;
-(long long)fzError;
-(NSString *)recipientHandle;
-(NSDate *)date;
-(NSString *)groupTitle;
-(long long)timeExpressiveSendPlayed;
-(NSString *)associatedMessageGUID;
-(long long)groupActionType;
-(long long)replaceID;
-(NSString *)destinationCallerID;
-(NSString *)roomnames;
-(id)initWithMessageRecord:(IMDMessageRecordStructRef)arg1 ;
-(BOOL)isMessage;
-(IMDMessageRecordStructRef)messageRecord;
-(long long)fzDateRead;
-(long long)fzDateDelivered;
-(long long)fzDatePlayed;
-(NSData *)fzAttributedBody;
-(NSString *)fzService;
-(NSString *)fzAccount;
-(NSString *)fzAccountGUID;
-(NSString *)fzSubject;
-(long long)otherHandleID;
@end

