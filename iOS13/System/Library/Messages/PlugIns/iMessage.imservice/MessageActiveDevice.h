/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@class NSString, NSDate;

@interface MessageActiveDevice : NSObject {

	BOOL _hasReceivedReadReceipt;
	NSString* _idsDestination;
	NSDate* _latestActiveDate;
	NSDate* _latestReadReceipt;

}

@property (nonatomic,retain) NSString * idsDestination;                //@synthesize idsDestination=_idsDestination - In the implementation block
@property (nonatomic,retain) NSDate * latestActiveDate;                //@synthesize latestActiveDate=_latestActiveDate - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedReadReceipt;              //@synthesize hasReceivedReadReceipt=_hasReceivedReadReceipt - In the implementation block
@property (nonatomic,retain) NSDate * latestReadReceipt;               //@synthesize latestReadReceipt=_latestReadReceipt - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)idsDestination;
-(void)setIdsDestination:(NSString *)arg1 ;
-(BOOL)shouldDisplayRemoteDecryptionFailure;
-(BOOL)shouldDisplayAttachmentDownloadFailure;
-(id)initWithIDSDestination:(id)arg1 latestDate:(id)arg2 latestReadReceiptDate:(id)arg3 hasReceivedReadReceipt:(BOOL)arg4 ;
-(void)setLatestActiveDate:(NSDate *)arg1 ;
-(void)setHasReceivedReadReceipt:(BOOL)arg1 ;
-(void)setLatestReadReceipt:(NSDate *)arg1 ;
-(BOOL)shouldSendTypingIndicator;
-(BOOL)_hasReceivedReadReceiptRecently;
-(NSDate *)latestActiveDate;
-(BOOL)hasReceivedReadReceipt;
-(NSDate *)latestReadReceipt;
@end

