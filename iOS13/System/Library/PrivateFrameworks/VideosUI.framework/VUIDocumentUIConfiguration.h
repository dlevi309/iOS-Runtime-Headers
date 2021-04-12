/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


#import <VideosUI/VideosUI-Structs.h>
@class NSString;

@interface VUIDocumentUIConfiguration : NSObject {

	BOOL _animated;
	BOOL _navigationBarHidden;
	BOOL _navigationBarAdjustedToSizeClass;
	BOOL _isInteractivePopGestureAllowed;
	long long _type;
	NSString* _viewControllerIdentifier;
	NSString* _viewControllerDocumentIdentifier;

}

@property (assign,nonatomic) long long type;                                                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * viewControllerIdentifier;                                                            //@synthesize viewControllerIdentifier=_viewControllerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * viewControllerDocumentIdentifier;                                                    //@synthesize viewControllerDocumentIdentifier=_viewControllerDocumentIdentifier - In the implementation block
@property (assign,getter=isAnimated,nonatomic) BOOL animated;                                                              //@synthesize animated=_animated - In the implementation block
@property (assign,getter=isNavigationBarHidden,nonatomic) BOOL navigationBarHidden;                                        //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (assign,getter=isNavigationBarAdjustedToSizeClass,nonatomic) BOOL navigationBarAdjustedToSizeClass;              //@synthesize navigationBarAdjustedToSizeClass=_navigationBarAdjustedToSizeClass - In the implementation block
@property (assign,getter=isInteractivePopGestureAllowed,nonatomic) BOOL isInteractivePopGestureAllowed;                    //@synthesize isInteractivePopGestureAllowed=_isInteractivePopGestureAllowed - In the implementation block
+(id)uiConfigurationWithDict:(id)arg1 ;
+(long long)_presentationTypeFromString:(id)arg1 ;
+(CGSize)_preferredSizeFromConfig:(id)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(BOOL)isAnimated;
-(BOOL)isNavigationBarHidden;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(NSString *)viewControllerIdentifier;
-(BOOL)isNavigationBarAdjustedToSizeClass;
-(BOOL)isInteractivePopGestureAllowed;
-(NSString *)viewControllerDocumentIdentifier;
-(void)setViewControllerIdentifier:(NSString *)arg1 ;
-(void)setViewControllerDocumentIdentifier:(NSString *)arg1 ;
-(void)setNavigationBarAdjustedToSizeClass:(BOOL)arg1 ;
-(void)setIsInteractivePopGestureAllowed:(BOOL)arg1 ;
@end

