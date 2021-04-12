/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@class WLSourceDeviceRecordSummary, WLMessageSMILContext, NSMutableArray, NSData, NSString, NSDate, WLMessageParty, NSArray;

@interface WLMessage : NSObject {

	WLSourceDeviceRecordSummary* _summary;
	WLMessageSMILContext* _smilContext;
	NSMutableArray* _mimeParts;
	BOOL _isGroupMessage;
	NSData* _mimeData;
	unsigned long long _messageType;
	NSString* _dateString;
	NSDate* _date;
	unsigned long long _messageDirection;
	WLMessageParty* _sender;
	NSArray* _recipients;
	NSString* _subject;
	NSString* _messageText;
	NSString* _threadID;
	NSArray* _attachments;

}

@property (nonatomic,readonly) NSData * mimeData;                                //@synthesize mimeData=_mimeData - In the implementation block
@property (nonatomic,readonly) unsigned long long messageType;                   //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,readonly) NSString * dateString;                            //@synthesize dateString=_dateString - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned long long messageDirection;              //@synthesize messageDirection=_messageDirection - In the implementation block
@property (nonatomic,readonly) WLMessageParty * sender;                          //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) NSArray * recipients;                             //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,readonly) BOOL isGroupMessage;                              //@synthesize isGroupMessage=_isGroupMessage - In the implementation block
@property (nonatomic,readonly) NSString * subject;                               //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * messageText;                           //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,readonly) NSString * threadID;                              //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,readonly) NSArray * attachments;                            //@synthesize attachments=_attachments - In the implementation block
+(NSRange)_populateMimeHeaders:(id)arg1 recipients:(id)arg2 fromRange:(NSRange)arg3 ofString:(id)arg4 addCountryCodeToParties:(BOOL)arg5 sqlController:(id)arg6 ;
+(void)addRecipients:(id)arg1 toMimeHeaders:(id)arg2 ;
+(id)_dateFormatterForMimeDateStrings;
+(BOOL)_shouldIgnoreMessageThreadID;
+(id)_fileNameForPart:(id)arg1 smilContext:(id)arg2 ;
+(id)mimeHeadersFromMimeData:(id)arg1 sqlController:(id)arg2 ;
+(id)dateFromMimeHeaders:(id)arg1 ;
+(id)senderFromMimeHeaders:(id)arg1 ;
+(id)recipientsFromMimeHeaders:(id)arg1 ;
-(NSDate *)date;
-(NSArray *)attachments;
-(WLMessageParty *)sender;
-(NSArray *)recipients;
-(NSString *)subject;
-(NSString *)messageText;
-(unsigned long long)messageType;
-(id)summary;
-(void)setSummary:(id)arg1 ;
-(NSString *)threadID;
-(void)progressiveMimeParser:(id)arg1 beganMimePart:(id)arg2 ;
-(void)progressiveMimeParser:(id)arg1 finishedMimePart:(id)arg2 ;
-(void)progressiveMimeParser:(id)arg1 beganDataForMimePart:(id)arg2 ;
-(void)progressiveMimeParser:(id)arg1 failedWithError:(id)arg2 ;
-(BOOL)isGroupMessage;
-(NSString *)dateString;
-(NSData *)mimeData;
-(void)parseMIMEData:(id)arg1 sqlController:(id)arg2 ;
-(unsigned long long)messageDirection;
@end

