/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSMutableDictionary;

@interface HUViewControllerRegistry : NSObject {

	NSMutableDictionary* _viewControllerClassesByIdentifier;

}

@property (nonatomic,readonly) NSMutableDictionary * viewControllerClassesByIdentifier;              //@synthesize viewControllerClassesByIdentifier=_viewControllerClassesByIdentifier - In the implementation block
+(id)sharedInstance;
-(id)init;
-(Class)viewControllerClassForIdentifier:(id)arg1 ;
-(NSMutableDictionary *)viewControllerClassesByIdentifier;
-(void)registerViewControllerClass:(Class)arg1 forIdentifier:(id)arg2 ;
@end

