/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)level;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)setCollapsed:(BOOL)arg1 ;
-(void)setLevel:(long long)arg1 ;
-(BOOL)collapsed;
-(id)initWithView:(id)arg1 atLevel:(long long)arg2 ;
@end

