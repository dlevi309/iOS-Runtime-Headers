/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIView;

@interface UIDebuggingInformationHierarchyDataContainer : NSObject {

	BOOL _collapsed;
	UIView* _view;
	long long _level;

}

@property (assign,nonatomic,__weak) UIView * view;              //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) long long level;                   //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) BOOL collapsed;                    //@synthesize collapsed=_collapsed - In the implementation block
-(void)setView:(UIView *)arg1 ;
-(UIView *)view;
-(long long)level;
-(BOOL)collapsed;
-(void)setCollapsed:(BOOL)arg1 ;
-(void)setLevel:(long long)arg1 ;
-(id)initWithView:(id)arg1 atLevel:(long long)arg2 ;
@end

