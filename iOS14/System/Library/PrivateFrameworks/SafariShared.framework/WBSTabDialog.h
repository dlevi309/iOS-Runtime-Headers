/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCancellationExemptions:(NSArray *)arg1 ;
-(id)createInfo;
-(BOOL)blocksWebProcessUntilDismissed;
-(void)setBlocksWebProcessUntilDismissed:(BOOL)arg1 ;
-(NSArray *)cancellationExemptions;
-(id)_init;
@end

