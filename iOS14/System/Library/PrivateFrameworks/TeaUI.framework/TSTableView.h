/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UITableView.h>

@protocol OS_dispatch_group;
@class NSObject;

@interface TSTableView : UITableView {

	BOOL _tsaxPrefersCustomReorderMessage;
	NSObject*<OS_dispatch_group> _touchDeferGroup;
	long long _touchDeferCounter;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> touchDeferGroup;              //@synthesize touchDeferGroup=_touchDeferGroup - In the implementation block
@property (assign,nonatomic) long long touchDeferCounter;                                 //@synthesize touchDeferCounter=_touchDeferCounter - In the implementation block
@property (assign,nonatomic) BOOL tsaxPrefersCustomReorderMessage;                        //@synthesize tsaxPrefersCustomReorderMessage=_tsaxPrefersCustomReorderMessage - In the implementation block
+(long long)ts_preferredStyleForStyle:(long long)arg1 ;
-(long long)touchDeferCounter;
-(id)contextualActionForDeletingRowAtIndexPath:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setTouchDeferCounter:(long long)arg1 ;
-(BOOL)tsaxPrefersCustomReorderMessage;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setTsaxPrefersCustomReorderMessage:(BOOL)arg1 ;
-(void)_deferWhenTouchingWithBlock:(/*^block*/id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityReorderMessageForNewIndexPath:(id)arg1 swappedWithRow:(long long)arg2 movingDown:(BOOL)arg3 ;
-(NSObject*<OS_dispatch_group>)touchDeferGroup;
@end

