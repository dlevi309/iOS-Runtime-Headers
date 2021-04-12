/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/HUControlView.h>

@protocol HUControlViewDelegate;
@class NSString, NSArray, NSFormatter;

@interface HUWheelControlPopUpButton : UIButton <HUControlView> {

	NSString* _identifier;
	id<HUControlViewDelegate> _delegate;
	id _value;
	NSArray* _values;
	NSFormatter* _valueFormatter;

}

@property (nonatomic,retain) NSArray * values;                                       //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSFormatter * valueFormatter;                           //@synthesize valueFormatter=_valueFormatter - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<HUControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id value;                                               //@synthesize value=_value - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL canBeHighlighted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)valueClass;
-(void)setDisabled:(BOOL)arg1 ;
-(id<HUControlViewDelegate>)delegate;
-(NSArray *)values;
-(BOOL)isDisabled;
-(void)setValues:(NSArray *)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)setDelegate:(id<HUControlViewDelegate>)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)value;
-(NSFormatter *)valueFormatter;
-(void)setValueFormatter:(NSFormatter *)arg1 ;
-(id)_createMenu;
@end

