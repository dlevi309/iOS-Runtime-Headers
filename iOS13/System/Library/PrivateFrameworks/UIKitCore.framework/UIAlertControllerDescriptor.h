/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIAlertControllerDescriptor : NSObject {

	BOOL _hasHeaderContentViewController;
	BOOL _hasTitle;
	BOOL _hasMessage;
	BOOL _hasContentViewController;
	BOOL _applicationIsFullscreen;
	long long _numberOfActions;
	UIEdgeInsets _containerViewSafeAreaInsets;

}

@property (assign) BOOL hasHeaderContentViewController;                   //@synthesize hasHeaderContentViewController=_hasHeaderContentViewController - In the implementation block
@property (assign) BOOL hasTitle;                                         //@synthesize hasTitle=_hasTitle - In the implementation block
@property (assign) BOOL hasMessage;                                       //@synthesize hasMessage=_hasMessage - In the implementation block
@property (assign) BOOL hasContentViewController;                         //@synthesize hasContentViewController=_hasContentViewController - In the implementation block
@property (assign) long long numberOfActions;                             //@synthesize numberOfActions=_numberOfActions - In the implementation block
@property (assign) BOOL applicationIsFullscreen;                          //@synthesize applicationIsFullscreen=_applicationIsFullscreen - In the implementation block
@property (assign) UIEdgeInsets containerViewSafeAreaInsets;              //@synthesize containerViewSafeAreaInsets=_containerViewSafeAreaInsets - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasHeaderContentViewController:(BOOL)arg1 ;
-(void)setHasTitle:(BOOL)arg1 ;
-(void)setHasMessage:(BOOL)arg1 ;
-(void)setHasContentViewController:(BOOL)arg1 ;
-(void)setNumberOfActions:(long long)arg1 ;
-(void)setContainerViewSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)setApplicationIsFullscreen:(BOOL)arg1 ;
-(BOOL)hasMessage;
-(BOOL)hasTitle;
-(BOOL)hasContentViewController;
-(long long)numberOfActions;
-(BOOL)hasHeaderContentViewController;
-(BOOL)applicationIsFullscreen;
-(UIEdgeInsets)containerViewSafeAreaInsets;
@end

