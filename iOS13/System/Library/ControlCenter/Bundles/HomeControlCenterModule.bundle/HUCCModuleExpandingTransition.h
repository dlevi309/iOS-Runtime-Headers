/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
*/


#import <HomeControlCenterModule/HomeControlCenterModule-Structs.h>
@interface HUCCModuleExpandingTransition : NSObject {

	BOOL _expanding;
	CGSize _expandedSize;

}

@property (nonatomic,readonly) CGSize expandedSize;              //@synthesize expandedSize=_expandedSize - In the implementation block
@property (nonatomic,readonly) BOOL expanding;                   //@synthesize expanding=_expanding - In the implementation block
-(CGSize)expandedSize;
-(id)initWithExpandingState:(BOOL)arg1 expandedSize:(CGSize)arg2 ;
-(BOOL)expanding;
@end

