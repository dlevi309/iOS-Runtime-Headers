/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIView *)view;
-(UIViewController *)viewController;
-(long long)accessoryType;
-(void)setAccessoryType:(long long)arg1 ;
-(void)setDetail:(NSString *)arg1 ;
-(NSString *)detail;
-(void)_updateForInspectedView:(id)arg1 ;
@end

