/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIBarButtonItem *)barButtonItem;
-(id)actionFilter;
-(id)init;
-(SEL)proxyAction;
-(id)initWithBarButtonItem:(id)arg1 ;
-(void)_invoke:(id)arg1 forEvent:(id)arg2 ;
-(void)setActionFilter:(id)arg1 ;
@end

