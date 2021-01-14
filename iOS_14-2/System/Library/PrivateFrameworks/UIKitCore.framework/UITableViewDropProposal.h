/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_updatedDropProposalWithDropOperation:(unsigned long long)arg1 dropIntent:(long long)arg2 adjustedTargetIndexPath:(id)arg3 ;
-(void)setIntent:(long long)arg1 ;
-(id)_adjustedTargetIndexPath;
-(long long)_dropAction;
-(long long)_dropLocation;
-(void)_setAdjustedTargetIndexPath:(id)arg1 ;
-(id)initWithDropOperation:(unsigned long long)arg1 ;
-(id)initWithDropOperation:(unsigned long long)arg1 intent:(long long)arg2 ;
-(id)initWithDropOperation:(unsigned long long)arg1 dropLocation:(long long)arg2 ;
@end

