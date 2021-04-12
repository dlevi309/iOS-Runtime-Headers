/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIDropProposal.h>

@interface UICollectionViewDropProposal : UIDropProposal {

	long long _intent;

}

@property (assign,nonatomic) long long intent;              //@synthesize intent=_intent - In the implementation block
-(id)description;
-(long long)intent;
-(id)initWithDropOperation:(unsigned long long)arg1 ;
-(id)initWithDropOperation:(unsigned long long)arg1 intent:(long long)arg2 ;
-(id)initWithDropOperation:(unsigned long long)arg1 dropLocation:(long long)arg2 ;
-(long long)dropLocation;
-(void)setIntent:(long long)arg1 ;
@end

