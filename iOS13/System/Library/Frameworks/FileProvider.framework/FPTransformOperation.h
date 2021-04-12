/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperation.h>

@class NSArray;

@interface FPTransformOperation : FPActionOperation {

	NSArray* _items;
	/*^block*/id _transformCompletionBlock;

}

@property (nonatomic,readonly) NSArray * items;                      //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) id transformCompletionBlock;              //@synthesize transformCompletionBlock=_transformCompletionBlock - In the implementation block
-(NSArray *)items;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)fp_prettyDescription;
-(void)actionMain;
-(void)presendNotifications;
-(id)initWithItemsOfDifferentProviders:(id)arg1 action:(id)arg2 ;
-(unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)finalItemsForStitcherForResult:(id)arg1 ;
-(void)postStitchingFinishWithResult:(id)arg1 error:(id)arg2 ;
-(id)transformCompletionBlock;
-(void)setTransformCompletionBlock:(id)arg1 ;
@end

