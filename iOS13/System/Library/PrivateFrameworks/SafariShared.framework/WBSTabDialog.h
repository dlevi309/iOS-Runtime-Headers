/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSArray;

@interface WBSTabDialog : NSObject {

	/*^block*/id _presentationBlock;
	/*^block*/id _dismissalBlock;
	BOOL _blocksWebProcessUntilDismissed;
	NSArray* _cancellationExemptions;

}

@property (assign,nonatomic) BOOL blocksWebProcessUntilDismissed;              //@synthesize blocksWebProcessUntilDismissed=_blocksWebProcessUntilDismissed - In the implementation block
@property (nonatomic,copy) NSArray * cancellationExemptions;                   //@synthesize cancellationExemptions=_cancellationExemptions - In the implementation block
+(id)tabDialogWithPresentationBlock:(/*^block*/id)arg1 dismissalBlock:(/*^block*/id)arg2 ;
-(id)init;
-(id)_init;
-(void)setBlocksWebProcessUntilDismissed:(BOOL)arg1 ;
-(void)setCancellationExemptions:(NSArray *)arg1 ;
-(id)createInfo;
-(BOOL)blocksWebProcessUntilDismissed;
-(NSArray *)cancellationExemptions;
@end

