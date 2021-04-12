/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


#import <TeaUI/TeaUI-Structs.h>
@class NSString, UIViewController;

@interface TSPluginModel : NSObject {

	 identifier;
	 revision;
	 size;
	 viewController;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) long long revision; 
@property (readonly,nonatomic) CGSize size; 
@property (readonly,nonatomic) UIViewController * viewController; 
@property (readonly,nonatomic) long long hash; 
-(id)init;
-(long long)hash;
-(NSString *)identifier;
-(CGSize)size;
-(long long)revision;
-(UIViewController *)viewController;
@end

