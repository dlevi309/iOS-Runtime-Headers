/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
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
-(BOOL)blocked;
-(void)setDelegate:(id<ICDocCamProcessingBlockerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSMutableSet *)blockerSet;
-(void)addBlockerOfType:(id)arg1 clearRectangles:(BOOL)arg2 clearQueue:(BOOL)arg3 ;
-(void)removeBlockerOfType:(id)arg1 ;
-(void)setBlockerSet:(NSMutableSet *)arg1 ;
@end

