/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UILayoutEngineSuspending.h>

@class NSString;

@interface UITableViewCellContentView : UIView <_UILayoutEngineSuspending> {

	struct {
		unsigned edgesForOverridingDefaultLayoutMargins : 4;
	}  _contentViewFlags;
	BOOL _isLayoutEngineSuspended;
	NSDirectionalEdgeInsets _overriddenDefaultLayoutMargins;

}

@property (assign,setter=_setOverriddenDefaultLayoutMargins:,getter=_overriddenDefaultLayoutMargins,nonatomic) NSDirectionalEdgeInsets overriddenDefaultLayoutMargins;              //@synthesize overriddenDefaultLayoutMargins=_overriddenDefaultLayoutMargins - In the implementation block
@property (assign,setter=_setLayoutEngineSuspended:,getter=_isLayoutEngineSuspended,nonatomic) BOOL _layoutEngineSuspended;                                                         //@synthesize isLayoutEngineSuspended=_isLayoutEngineSuspended - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classFallbacksForKeyedArchiver;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(BOOL)_isLayoutEngineSuspended;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_tableViewCellContentViewCommonSetup;
-(id)initWithCoder:(id)arg1 ;
-(UIEdgeInsets)_concreteDefaultLayoutMargins;
-(NSDirectionalEdgeInsets)_overriddenDefaultLayoutMargins;
-(void)_setOverriddenDefaultLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(void)_setLayoutEngineSuspended:(BOOL)arg1 ;
@end

