/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CPSEntityUpdateSupporting.h>

@protocol CPEntityNameProviding;
@class UILabel, UIStackView, NSArray, NSString;

@interface CPSNameViewController : UIViewController <CPSEntityUpdateSupporting> {

	id<CPEntityNameProviding> _entity;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _tertiaryLabel;
	UIStackView* _stackView;
	NSArray* _layoutConstraints;

}

@property (nonatomic,retain) id<CPEntityNameProviding> entity;              //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) UILabel * primaryLabel;                      //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryLabel;                    //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * tertiaryLabel;                     //@synthesize tertiaryLabel=_tertiaryLabel - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                     //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                   //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEntity:(id)arg1 ;
-(void)updateViewConstraints;
-(void)setEntity:(id<CPEntityNameProviding>)arg1 ;
-(id<CPEntityNameProviding>)entity;
-(UIStackView *)stackView;
-(void)resetLayoutConstraints;
-(void)setupLayoutConstraints;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(UILabel *)primaryLabel;
-(UILabel *)tertiaryLabel;
-(void)viewDidLoad;
-(void)setupViews;
-(void)updateViews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)secondaryLabel;
-(void)updateWithEntity:(id)arg1 ;
@end

