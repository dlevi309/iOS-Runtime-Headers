/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UILayoutEngineSuspending.h>

@class CALayer, NSString;

@interface UITableViewCellContentView : UIView <_UILayoutEngineSuspending> {

	struct {
		unsigned edgesForOverridingDefaultLayoutMargins : 4;
	}  _contentViewFlags;
	BOOL _isLayoutEngineSuspended;
	CALayer* _mask;
	NSDirectionalEdgeInsets _overriddenDefaultLayoutMargins;

}

@property (nonatomic,retain) CALayer * mask;                                                                                                                                        //@synthesize mask=_mask - In the implementation block
@property (assign,setter=_setOverriddenDefaultLayoutMargins:,getter=_overriddenDefaultLayoutMargins,nonatomic) NSDirectionalEdgeInsets overriddenDefaultLayoutMargins;              //@synthesize overriddenDefaultLayoutMargins=_overriddenDefaultLayoutMargins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setLayoutEngineSuspended:,getter=_isLayoutEngineSuspended,nonatomic) BOOL _layoutEngineSuspended;                                                         //@synthesize isLayoutEngineSuspended=_isLayoutEngineSuspended - In the implementation block
+(id)classFallbacksForKeyedArchiver;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CALayer *)mask;
-(void)setMask:(CALayer *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(id)_cell;
-(void)_setLayoutEngineSuspended:(BOOL)arg1 ;
-(UIEdgeInsets)_concreteDefaultLayoutMargins;
-(BOOL)_isLayoutEngineSuspended;
-(NSDirectionalEdgeInsets)_overriddenDefaultLayoutMargins;
-(void)_setOverriddenDefaultLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(void)_tableViewCellContentViewCommonSetup;
@end

