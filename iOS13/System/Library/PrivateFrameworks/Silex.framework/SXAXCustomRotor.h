/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <UIKitCore/UIAccessibilityCustomRotor.h>

@class NSOrderedSet;

@interface SXAXCustomRotor : UIAccessibilityCustomRotor {

	NSOrderedSet* _rotorItems;

}

@property (nonatomic,copy) NSOrderedSet * rotorItems;              //@synthesize rotorItems=_rotorItems - In the implementation block
+(id)rotorWithName:(id)arg1 ;
-(id)description;
-(id)initWithName:(id)arg1 ;
-(id)rotorItemBefore:(id)arg1 ;
-(id)rotorItemAfter:(id)arg1 ;
-(long long)indexOfRotorItem:(id)arg1 ;
-(NSOrderedSet *)rotorItems;
-(void)setRotorItems:(NSOrderedSet *)arg1 ;
@end

