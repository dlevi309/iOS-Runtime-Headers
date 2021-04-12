/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSDictionary;

@interface UIPeripheralHostState : NSObject {

	UIPeripheralAnimationGeometry _geometry;
	NSDictionary* _screenGeometry;
	BOOL _inPositionIsDestination;

}

@property (assign,nonatomic) UIPeripheralAnimationGeometry geometry;              //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,retain) NSDictionary * screenGeometry;                       //@synthesize screenGeometry=_screenGeometry - In the implementation block
@property (assign,nonatomic) BOOL inPositionIsDestination;                        //@synthesize inPositionIsDestination=_inPositionIsDestination - In the implementation block
+(id)stateWithGeometry:(UIPeripheralAnimationGeometry)arg1 inPositionIsDestination:(BOOL)arg2 ;
-(void)dealloc;
-(UIPeripheralAnimationGeometry)geometry;
-(void)setGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(void)setInPositionIsDestination:(BOOL)arg1 ;
-(void)setScreenGeometry:(NSDictionary *)arg1 ;
-(NSDictionary *)screenGeometry;
-(BOOL)inPositionIsDestination;
@end

