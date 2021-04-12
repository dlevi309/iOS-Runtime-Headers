/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@protocol OS_dispatch_group;
@class NSObject, MessageAttachmentSingleStatus, NSURL, NSString, NSArray;

@interface MessageAttachmentEagerUploadStatus : NSObject {

	long long _waitCount;
	NSObject*<OS_dispatch_group> _uploadGroup;
	long long _state;
	MessageAttachmentSingleStatus* _attachmentStatus;
	NSURL* _originalURL;
	NSString* _transferredName;
	NSString* _transferId;
	long long _targetSize;
	NSArray* _attachmentSendContexts;
	unsigned long long _totalBytes;
	long long _useCount;
	double _expiration;

}

@property (assign) long long state;                                               //@synthesize state=_state - In the implementation block
@property (retain) MessageAttachmentSingleStatus * attachmentStatus;              //@synthesize attachmentStatus=_attachmentStatus - In the implementation block
@property (retain,readonly) NSURL * originalURL;                                  //@synthesize originalURL=_originalURL - In the implementation block
@property (copy) NSString * transferredName;                                      //@synthesize transferredName=_transferredName - In the implementation block
@property (retain,readonly) NSString * transferId;                                //@synthesize transferId=_transferId - In the implementation block
@property (readonly) long long targetSize;                                        //@synthesize targetSize=_targetSize - In the implementation block
@property (copy) NSArray * attachmentSendContexts;                                //@synthesize attachmentSendContexts=_attachmentSendContexts - In the implementation block
@property (assign) unsigned long long totalBytes;                                 //@synthesize totalBytes=_totalBytes - In the implementation block
@property (readonly) long long useCount;                                          //@synthesize useCount=_useCount - In the implementation block
@property (readonly) double expiration;                                           //@synthesize expiration=_expiration - In the implementation block
-(void)dealloc;
-(id)description;
-(BOOL)cancel;
-(void)start;
-(long long)state;
-(void)wait:(/*^block*/id)arg1 ;
-(void)finish;
-(void)setState:(long long)arg1 ;
-(NSURL *)originalURL;
-(void)incrementUseCount;
-(BOOL)isComplete;
-(long long)targetSize;
-(unsigned long long)totalBytes;
-(BOOL)isCanceled;
-(double)expiration;
-(long long)useCount;
-(BOOL)isSuccess;
-(void)setTotalBytes:(unsigned long long)arg1 ;
-(NSArray *)attachmentSendContexts;
-(void)setAttachmentSendContexts:(NSArray *)arg1 ;
-(NSString *)transferredName;
-(id)initWithOriginalURL:(id)arg1 transferId:(id)arg2 targetSize:(long long)arg3 ;
-(void)attachToTransfer:(id)arg1 messageGUID:(id)arg2 ;
-(MessageAttachmentSingleStatus *)attachmentStatus;
-(void)setAttachmentStatus:(MessageAttachmentSingleStatus *)arg1 ;
-(void)setTransferredName:(NSString *)arg1 ;
-(NSString *)transferId;
@end

