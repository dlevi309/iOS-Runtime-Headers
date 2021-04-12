/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>

@class PGChevronView;

@interface PGStashedView : UIView {

	PGChevronView* _chevronViewLeftColorBurn;
	PGChevronView* _chevronViewLeftPlusD;
	PGChevronView* _chevronViewRightColorBurn;
	PGChevronView* _chevronViewRightPlusD;
	BOOL _stashed;

}

@property (assign,getter=isStashed,nonatomic) BOOL stashed;              //@synthesize stashed=_stashed - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setStashed:(BOOL)arg1 ;
-(BOOL)isStashed;
@end

