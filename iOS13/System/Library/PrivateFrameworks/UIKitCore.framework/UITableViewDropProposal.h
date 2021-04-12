/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIDropProposal.h>

@class NSIndexPath;

@interface UITableViewDropProposal : UIDropProposal {

	long long _intent;
	NSIndexPath* _adjustedTargetIndexPath;

}

@property (assign,nonatomic) long long intent;                                                                                                       //@synthesize intent=_intent - In the implementation block
@property (setter=_setAdjustedTargetIndexPath:,getter=_adjustedTargetIndexPath,nonatomic,retain) NSIndexPath * adjustedTargetIndexPath;              //@synthesize adjustedTargetIndexPath=_adjustedTargetIndexPath - In the implementation block
@property (nonatomic,readonly) long long _dropLocation; 
-(long long)intent;
-(id)initWithDropOperation:(unsigned long long)arg1 ;
-(id)initWithDropOperation:(unsigned long long)arg1 intent:(long long)arg2 ;
-(id)initWithDropOperation:(unsigned long long)arg1 dropLocation:(long long)arg2 ;
-(void)setIntent:(long long)arg1 ;
-(id)_adjustedTargetIndexPath;
-(void)_setAdjustedTargetIndexPath:(id)arg1 ;
-(long long)_dropLocation;
-(id)_updatedDropProposalWithDropOperation:(unsigned long long)arg1 dropIntent:(long long)arg2 adjustedTargetIndexPath:(id)arg3 ;
-(long long)_dropAction;
@end

