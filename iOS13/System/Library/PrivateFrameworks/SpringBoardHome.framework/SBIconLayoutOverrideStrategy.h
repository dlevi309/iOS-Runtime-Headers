/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


#import <SpringBoardHome/SpringBoardHome-Structs.h>
@interface SBIconLayoutOverrideStrategy : NSObject {

	UIEdgeInsets _layoutInsets;
	BOOL _preservesCurrentListOrigin;

}

@property (nonatomic,readonly) UIEdgeInsets layoutInsets;                    //@synthesize layoutInsets=_layoutInsets - In the implementation block
@property (nonatomic,readonly) BOOL preservesCurrentListOrigin;              //@synthesize preservesCurrentListOrigin=_preservesCurrentListOrigin - In the implementation block
-(UIEdgeInsets)layoutInsets;
-(id)initWithLayoutInsets:(UIEdgeInsets)arg1 perservingCurrentListOrigin:(BOOL)arg2 ;
-(BOOL)preservesCurrentListOrigin;
@end

