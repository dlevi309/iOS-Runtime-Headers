/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol _MKPlaceActionButtonControllerProtocol;
@class NSString;

@interface _MKPlaceActionButtonController : NSObject <_MKInfoCardChildViewControllerAnalyticsDelegate> {

	int _analyticsAction;
	NSString* _buttonTitle;
	NSString* _buttonSubTitle;
	/*^block*/id _buttonSelectedBlock;
	id<_MKPlaceActionButtonControllerProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<_MKPlaceActionButtonControllerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * buttonTitle;                                                //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,readonly) NSString * buttonSubTitle;                                             //@synthesize buttonSubTitle=_buttonSubTitle - In the implementation block
@property (nonatomic,readonly) id buttonSelectedBlock;                                                //@synthesize buttonSelectedBlock=_buttonSelectedBlock - In the implementation block
@property (nonatomic,readonly) int analyticsAction;                                                   //@synthesize analyticsAction=_analyticsAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(/*^block*/id)arg3 ;
-(id<_MKPlaceActionButtonControllerProtocol>)delegate;
-(void)setDelegate:(id<_MKPlaceActionButtonControllerProtocol>)arg1 ;
-(NSString *)buttonTitle;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithTitle:(id)arg1 subTitle:(id)arg2 analyticsAction:(int)arg3 selectedBlock:(/*^block*/id)arg4 ;
-(int)analyticsAction;
-(id)initWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(/*^block*/id)arg3 ;
-(void)buttonTextChanged;
-(NSString *)buttonSubTitle;
-(id)buttonSelectedBlock;
@end

