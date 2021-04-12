/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

