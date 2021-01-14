/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSArray;

@interface HKTimeScopeControl : UIControl {

	NSArray* _timeScopes;
	BOOL _shortTextStyle;
	long long _selectedTimeScope;

}

@property (assign,nonatomic) long long selectedTimeScope;              //@synthesize selectedTimeScope=_selectedTimeScope - In the implementation block
+(id)controlWithFrame:(CGRect)arg1 style:(long long)arg2 timeScopes:(id)arg3 shortTextStyle:(BOOL)arg4 ;
-(void)setSelectedTimeScope:(long long)arg1 ;
-(long long)selectedTimeScope;
-(id)initWithFrame:(CGRect)arg1 timeScopes:(id)arg2 shortTextStyle:(BOOL)arg3 ;
-(long long)_timeScopeForIndex:(long long)arg1 ;
-(long long)_indexForTimeScope:(long long)arg1 ;
@end

