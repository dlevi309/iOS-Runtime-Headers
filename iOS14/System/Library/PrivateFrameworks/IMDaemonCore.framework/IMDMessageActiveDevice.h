/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class NSString, NSDate;

@interface IMDMessageActiveDevice : NSObject {

	BOOL _hasReceivedReadReceipt;
	NSString* _idsDestination;
	NSDate* _latestActiveDate;
	NSDate* _latestReadReceipt;

}

@property (nonatomic,retain) NSString * idsDestination;                //@synthesize idsDestination=_idsDestination - In the implementation block
@property (nonatomic,retain) NSDate * latestActiveDate;                //@synthesize latestActiveDate=_latestActiveDate - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedReadReceipt;              //@synthesize hasReceivedReadReceipt=_hasReceivedReadReceipt - In the implementation block
@property (nonatomic,retain) NSDate * latestReadReceipt;               //@synthesize latestReadReceipt=_latestReadReceipt - In the implementation block
-(id)description;
-(NSString *)idsDestination;
-(void)setIdsDestination:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldDisplayRemoteDecryptionFailure;
-(BOOL)shouldDisplayAttachmentDownloadFailure;
-(BOOL)shouldSendTypingIndicator;
-(BOOL)_hasReceivedReadReceiptRecently;
-(id)initWithIDSDestination:(id)arg1 latestDate:(id)arg2 latestReadReceiptDate:(id)arg3 hasReceivedReadReceipt:(BOOL)arg4 ;
-(NSDate *)latestActiveDate;
-(void)setLatestActiveDate:(NSDate *)arg1 ;
-(BOOL)hasReceivedReadReceipt;
-(void)setHasReceivedReadReceipt:(BOOL)arg1 ;
-(NSDate *)latestReadReceipt;
-(void)setLatestReadReceipt:(NSDate *)arg1 ;
@end

