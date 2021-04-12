/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, UIView, UIViewController;

@interface _UIDebuggingOverlayDetail : NSObject {

	NSString* _title;
	NSString* _detail;
	long long _accessoryType;

}

@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * detail;                                //@synthesize detail=_detail - In the implementation block
@property (assign,nonatomic) long long accessoryType;                          //@synthesize accessoryType=_accessoryType - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) UIViewController * viewController; 
+(id)detailWithTitle:(id)arg1 detail:(id)arg2 ;
-(NSString *)detail;
-(void)setTitle:(NSString *)arg1 ;
-(UIView *)view;
-(UIViewController *)viewController;
-(void)setAccessoryType:(long long)arg1 ;
-(void)setDetail:(NSString *)arg1 ;
-(long long)accessoryType;
-(void)_updateForInspectedView:(id)arg1 ;
-(NSString *)title;
@end

