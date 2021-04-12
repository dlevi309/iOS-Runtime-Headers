/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <WatchKit/WKInterfaceObject.h>

@class UIView, CAContext;

@interface WKInterfaceHMCamera : WKInterfaceObject {

	UIView* _containerView;
	UIView* _cameraView;
	CAContext* _context;
	CGSize _containerViewSize;

}

@property (nonatomic,retain) UIView * containerView;                //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * cameraView;                   //@synthesize cameraView=_cameraView - In the implementation block
@property (nonatomic,retain) CAContext * context;                   //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) CGSize containerViewSize;              //@synthesize containerViewSize=_containerViewSize - In the implementation block
-(CAContext *)context;
-(void)setContext:(CAContext *)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(long long)arg3 tableIndex:(long long)arg4 rowIndex:(long long)arg5 ;
-(void)setCameraSource:(id)arg1 ;
-(CGSize)containerViewSize;
-(void)setContainerViewSize:(CGSize)arg1 ;
-(void)updateContainerViewSize;
-(UIView *)cameraView;
-(void)remoteSetWidth:(double)arg1 ;
-(void)remoteSetHeight:(double)arg1 ;
-(void)setCameraView:(UIView *)arg1 ;
@end

