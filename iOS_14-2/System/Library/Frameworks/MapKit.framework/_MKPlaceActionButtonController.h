/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol _MKPlaceActionControlledButton;
@class NSString;

@interface _MKPlaceActionButtonController : NSObject <_MKInfoCardChildViewControllerAnalyticsDelegate> {

	BOOL _disabled;
	int _analyticsAction;
	NSString* _buttonTitle;
	NSString* _buttonSubTitle;
	/*^block*/id _buttonSelectedBlock;
	id<_MKPlaceActionControlledButton> _delegate;

}

@property (assign,nonatomic,__weak) id<_MKPlaceActionControlledButton> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * buttonTitle;                                        //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,readonly) NSString * buttonSubTitle;                                     //@synthesize buttonSubTitle=_buttonSubTitle - In the implementation block
@property (nonatomic,readonly) id buttonSelectedBlock;                                        //@synthesize buttonSelectedBlock=_buttonSelectedBlock - In the implementation block
@property (nonatomic,readonly) BOOL disabled;                                                 //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) int analyticsAction;                                           //@synthesize analyticsAction=_analyticsAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(/*^block*/id)arg3 ;
+(id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(/*^block*/id)arg3 disabled:(BOOL)arg4 ;
-(NSString *)buttonTitle;
-(id<_MKPlaceActionControlledButton>)delegate;
-(id)initWithTitle:(id)arg1 subTitle:(id)arg2 analyticsAction:(int)arg3 selectedBlock:(/*^block*/id)arg4 disabled:(BOOL)arg5 ;
-(int)analyticsAction;
-(id)initWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(/*^block*/id)arg3 ;
-(void)buttonTextChanged;
-(NSString *)buttonSubTitle;
-(id)buttonSelectedBlock;
-(void)setDelegate:(id<_MKPlaceActionControlledButton>)arg1 ;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(BOOL)disabled;
@end

