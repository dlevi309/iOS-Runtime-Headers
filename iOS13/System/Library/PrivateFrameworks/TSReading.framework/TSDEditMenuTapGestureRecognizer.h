/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UITapGestureRecognizer.h>

@class TSDRep;

@interface TSDEditMenuTapGestureRecognizer : UITapGestureRecognizer {

	TSDRep* mTouchedRep;
	BOOL mIgnoreTargetAction;

}

@property (assign,nonatomic) BOOL ignoreTargetAction; 
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)touchedRep;
-(BOOL)ignoreTargetAction;
-(void)setIgnoreTargetAction:(BOOL)arg1 ;
@end

