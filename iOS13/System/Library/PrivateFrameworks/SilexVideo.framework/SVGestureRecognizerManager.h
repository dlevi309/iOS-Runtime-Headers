/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVGestureRecognizerManager.h>

@protocol SVGestureRecognizerManager <NSObject>
@required
-(void)addGestureRecognizer:(id)arg1;
-(void)removeGestureRecognizer:(id)arg1;

@end

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVGestureRecognizerViewProviding;
@class NSMutableSet, NSString;

@interface SVGestureRecognizerManager : NSObject <SVGestureRecognizerManager, SVVideoTransitionObserver> {

	NSMutableSet* _gestureRecognizers;
	id<SVGestureRecognizerViewProviding> _viewProvider;

}

@property (nonatomic,readonly) NSMutableSet * gestureRecognizers;                              //@synthesize gestureRecognizers=_gestureRecognizers - In the implementation block
@property (nonatomic,readonly) id<SVGestureRecognizerViewProviding> viewProvider;              //@synthesize viewProvider=_viewProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)gestureRecognizers;
-(void)addGestureRecognizer:(id)arg1 ;
-(void)removeGestureRecognizer:(id)arg1 ;
-(id<SVGestureRecognizerViewProviding>)viewProvider;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setupGestureRecognizers;
-(id)initWithViewProvider:(id)arg1 ;
@end

