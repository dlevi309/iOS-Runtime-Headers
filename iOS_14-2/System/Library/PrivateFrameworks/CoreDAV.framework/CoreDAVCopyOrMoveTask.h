/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask {

	int _overwrite;
	NSURL* _destinationURL;
	NSURL* _priorOrderedURL;
	BOOL _shouldSendOrder;

}

@property (assign,nonatomic) int overwrite;                        //@synthesize overwrite=_overwrite - In the implementation block
@property (nonatomic,retain) NSURL * destinationURL;               //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,retain) NSURL * priorOrderedURL;              //@synthesize priorOrderedURL=_priorOrderedURL - In the implementation block
+(id)stringFromOverwriteValue:(int)arg1 ;
-(NSURL *)destinationURL;
-(id)initWithURL:(id)arg1 ;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(id)additionalHeaderValues;
-(id)description;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 ;
-(int)overwrite;
-(void)setOverwrite:(int)arg1 ;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(void)setPriorOrderedURL:(NSURL *)arg1 ;
-(NSURL *)priorOrderedURL;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 andOverwrite:(int)arg3 ;
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
@end

