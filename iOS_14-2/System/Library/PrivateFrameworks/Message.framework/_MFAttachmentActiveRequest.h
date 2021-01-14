/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class MFAttachment, NSProgress;

@interface _MFAttachmentActiveRequest : NSObject {

	BOOL _wantsCompletionBlockOffMainThread;
	MFAttachment* _attachment;
	NSProgress* _downloadProgress;
	/*^block*/id _fetchCompletionBlock;
	long long _lastProgressBytes;
	double _lastProgressTime;

}

@property (nonatomic,readonly) MFAttachment * attachment;                           //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) NSProgress * downloadProgress;                       //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,copy,readonly) id fetchCompletionBlock;                        //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
@property (nonatomic,readonly) BOOL wantsCompletionBlockOffMainThread;              //@synthesize wantsCompletionBlockOffMainThread=_wantsCompletionBlockOffMainThread - In the implementation block
@property (assign,nonatomic) long long lastProgressBytes;                           //@synthesize lastProgressBytes=_lastProgressBytes - In the implementation block
@property (assign,nonatomic) double lastProgressTime;                               //@synthesize lastProgressTime=_lastProgressTime - In the implementation block
-(id)fetchCompletionBlock;
-(double)lastProgressTime;
-(void)setLastProgressTime:(double)arg1 ;
-(NSProgress *)downloadProgress;
-(MFAttachment *)attachment;
-(id)initWithAttachment:(id)arg1 ;
-(BOOL)wantsCompletionBlockOffMainThread;
-(void)completeWithData:(id)arg1 error:(id)arg2 ;
-(long long)lastProgressBytes;
-(void)setLastProgressBytes:(long long)arg1 ;
@end

