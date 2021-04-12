/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


#import <TeaUI/TeaUI-Structs.h>
@class NSString;

@interface TSPluginModel : NSObject {

	 identifier;
	 revision;
	 size;
	 viewController;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) long long revision; 
@property (readonly,nonatomic) CGSize size; 
@property (readonly,nonatomic) UIViewController*<TUPluggable> viewController; 
@property (readonly,nonatomic) long long hash; 
-(id)init;
-(CGSize)size;
-(UIViewController*<TUPluggable>)viewController;
-(long long)hash;
-(NSString *)identifier;
-(long long)revision;
@end

