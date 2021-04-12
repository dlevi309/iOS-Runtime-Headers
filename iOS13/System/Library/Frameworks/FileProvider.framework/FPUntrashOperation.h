/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPTransformOperation.h>

@class FPItem;

@interface FPUntrashOperation : FPTransformOperation {

	FPItem* _restoreDirectory;
	/*^block*/id _untrashCompletionBlock;

}

@property (nonatomic,copy) id untrashCompletionBlock;              //@synthesize untrashCompletionBlock=_untrashCompletionBlock - In the implementation block
-(id)fp_prettyDescription;
-(void)presendNotifications;
-(id)replicateForItems:(id)arg1 ;
-(unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)postStitchingFinishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithItems:(id)arg1 restoreDirectory:(id)arg2 ;
-(id)untrashCompletionBlock;
-(void)setUntrashCompletionBlock:(id)arg1 ;
@end

