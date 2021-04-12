/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentInteractionPreviewContext.h>
@class UIViewController;


@protocol SXComponentInteractionPreviewContext <NSObject>
@property (nonatomic,readonly) UIViewController * viewController; 
@property (nonatomic,readonly) CGRect sourceRect; 
@required
-(UIViewController *)viewController;
-(CGRect)sourceRect;

@end


@class UIViewController, NSString;

@interface SXComponentInteractionPreviewContext : NSObject <SXComponentInteractionPreviewContext> {

	UIViewController* _viewController;
	CGRect _sourceRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) CGRect sourceRect;                              //@synthesize sourceRect=_sourceRect - In the implementation block
-(UIViewController *)viewController;
-(CGRect)sourceRect;
-(id)initWithViewController:(id)arg1 sourceRect:(CGRect)arg2 ;
@end

