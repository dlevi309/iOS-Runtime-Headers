/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

