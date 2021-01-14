/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
*/

#import <MMCSServices/MMCSSimpleFile.h>

@interface MMCSGetFile : MMCSSimpleFile {

	/*^block*/id _block;
	/*^block*/id _updateBlock;

}

@property (copy) id completionBlock;                  //@synthesize block=_block - In the implementation block
@property (copy) id progressUpdateBlock;              //@synthesize updateBlock=_updateBlock - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)dealloc;
-(void)setProgressUpdateBlock:(id)arg1 ;
-(id)progressUpdateBlock;
@end

