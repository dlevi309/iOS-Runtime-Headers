/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIBarButtonItem;

@interface _UIButtonBarTargetAction : NSObject {

	UIBarButtonItem* _barButtonItem;
	/*^block*/id _actionFilter;

}

@property (nonatomic,readonly) UIBarButtonItem * barButtonItem;              //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (nonatomic,copy) id actionFilter;                                  //@synthesize actionFilter=_actionFilter - In the implementation block
@property (nonatomic,readonly) SEL proxyAction; 
-(id)init;
-(id)initWithBarButtonItem:(id)arg1 ;
-(void)setActionFilter:(id)arg1 ;
-(SEL)proxyAction;
-(void)_invoke:(id)arg1 forEvent:(id)arg2 ;
-(UIBarButtonItem *)barButtonItem;
-(id)actionFilter;
@end

