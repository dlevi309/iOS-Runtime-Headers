/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
*/

#import <MMCSServices/MMCSSimpleFile.h>

@interface MMCSGetFile : MMCSSimpleFile {

	/*^block*/id _block;
	/*^block*/id _updateBlock;

}

@property (copy) id completionBlock;                  //@synthesize block=_block - In the implementation block
@property (copy) id progressUpdateBlock;              //@synthesize updateBlock=_updateBlock - In the implementation block
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setProgressUpdateBlock:(id)arg1 ;
-(id)progressUpdateBlock;
@end

