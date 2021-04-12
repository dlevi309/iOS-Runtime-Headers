/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/


@protocol ICDocCamProcessingBlockerDelegate;
@class NSMutableSet;

@interface ICDocCamProcessingBlocker : NSObject {

	id<ICDocCamProcessingBlockerDelegate> _delegate;
	NSMutableSet* _blockerSet;

}

@property (assign,nonatomic,__weak) id<ICDocCamProcessingBlockerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableSet * blockerSet;                                          //@synthesize blockerSet=_blockerSet - In the implementation block
-(id<ICDocCamProcessingBlockerDelegate>)delegate;
-(void)setDelegate:(id<ICDocCamProcessingBlockerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)blocked;
-(NSMutableSet *)blockerSet;
-(void)addBlockerOfType:(id)arg1 clearRectangles:(BOOL)arg2 clearQueue:(BOOL)arg3 ;
-(void)removeBlockerOfType:(id)arg1 ;
-(void)setBlockerSet:(NSMutableSet *)arg1 ;
@end

