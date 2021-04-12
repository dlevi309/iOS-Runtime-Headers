/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@protocol SLComposeSheetConfigurationItemObserving;
@class NSString;

@interface SLComposeSheetConfigurationItem : NSObject {

	id<SLComposeSheetConfigurationItemObserving> _changeObserver;
	BOOL _valuePending;
	NSString* _title;
	NSString* _value;
	/*^block*/id _tapHandler;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * value;                 //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL valuePending;              //@synthesize valuePending=_valuePending - In the implementation block
@property (nonatomic,copy) id tapHandler;                    //@synthesize tapHandler=_tapHandler - In the implementation block
-(id)init;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setChangeObserver:(id)arg1 ;
-(id)changeObserver;
-(void)setTapHandler:(id)arg1 ;
-(void)setValuePending:(BOOL)arg1 ;
-(BOOL)valuePending;
-(id)tapHandler;
@end

