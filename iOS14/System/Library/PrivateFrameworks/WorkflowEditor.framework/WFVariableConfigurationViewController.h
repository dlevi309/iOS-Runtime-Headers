/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFVariableConfigurationCellSizingDelegate.h>
#import <libobjc.A.dylib/WFVariableDelegate.h>
#import <libobjc.A.dylib/WFVariableObserver.h>
#import <libobjc.A.dylib/WFVariableConfigurationHeaderViewDelegate.h>
#import <libobjc.A.dylib/WFVariableConfigurationOptionsViewControllerDelegate.h>

@protocol WFVariableConfigurationViewControllerDelegate;
@class WFVariable, UITableView, WFVariableConfigurationHeaderView, WFVariableConfigurationInfoView, NSOrderedSet, NSArray, WFCoercionVariableAggrandizement, WFPropertyVariableAggrandizement, WFDateFormatVariableAggrandizement, WFDictionaryValueVariableAggrandizement, WFUnitVariableAggrandizement, NSString;

@interface WFVariableConfigurationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, WFVariableConfigurationCellSizingDelegate, WFVariableDelegate, WFVariableObserver, WFVariableConfigurationHeaderViewDelegate, WFVariableConfigurationOptionsViewControllerDelegate> {

	BOOL _propertyListExpanded;
	BOOL _userExplicitlySelectedDefaultProperty;
	WFVariable* _variable;
	id<WFVariableConfigurationViewControllerDelegate> _delegate;
	unsigned long long _resultType;
	UITableView* _tableView;
	WFVariableConfigurationHeaderView* _headerView;
	WFVariableConfigurationInfoView* _infoView;
	NSOrderedSet* _classesForVisibleAggrandizements;
	NSArray* _properties;
	WFCoercionVariableAggrandizement* _coercionAggrandizement;
	WFPropertyVariableAggrandizement* _propertyAggrandizement;
	WFDateFormatVariableAggrandizement* _dateFormatAggrandizement;
	WFDictionaryValueVariableAggrandizement* _dictionaryValueAggrandizement;
	WFUnitVariableAggrandizement* _unitAggrandizement;

}

@property (assign,nonatomic,__weak) UITableView * tableView;                                                       //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) WFVariableConfigurationHeaderView * headerView;                                //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic,__weak) WFVariableConfigurationInfoView * infoView;                                    //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,retain) NSOrderedSet * classesForVisibleAggrandizements;                                      //@synthesize classesForVisibleAggrandizements=_classesForVisibleAggrandizements - In the implementation block
@property (nonatomic,retain) NSArray * properties;                                                                 //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) BOOL propertyListExpanded;                                                            //@synthesize propertyListExpanded=_propertyListExpanded - In the implementation block
@property (assign,nonatomic) BOOL userExplicitlySelectedDefaultProperty;                                           //@synthesize userExplicitlySelectedDefaultProperty=_userExplicitlySelectedDefaultProperty - In the implementation block
@property (nonatomic,retain) WFCoercionVariableAggrandizement * coercionAggrandizement;                            //@synthesize coercionAggrandizement=_coercionAggrandizement - In the implementation block
@property (nonatomic,retain) WFPropertyVariableAggrandizement * propertyAggrandizement;                            //@synthesize propertyAggrandizement=_propertyAggrandizement - In the implementation block
@property (nonatomic,retain) WFDateFormatVariableAggrandizement * dateFormatAggrandizement;                        //@synthesize dateFormatAggrandizement=_dateFormatAggrandizement - In the implementation block
@property (nonatomic,retain) WFDictionaryValueVariableAggrandizement * dictionaryValueAggrandizement;              //@synthesize dictionaryValueAggrandizement=_dictionaryValueAggrandizement - In the implementation block
@property (nonatomic,retain) WFUnitVariableAggrandizement * unitAggrandizement;                                    //@synthesize unitAggrandizement=_unitAggrandizement - In the implementation block
@property (nonatomic,readonly) WFVariable * variable;                                                              //@synthesize variable=_variable - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableConfigurationViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long resultType;                                                        //@synthesize resultType=_resultType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultPropertyForContentClass:(Class)arg1 resultType:(unsigned long long)arg2 ;
+(BOOL)shouldShowOnInsertionOfVariable:(id)arg1 ;
-(void)setResultType:(unsigned long long)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)setHeaderView:(WFVariableConfigurationHeaderView *)arg1 ;
-(NSArray *)properties;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<WFVariableConfigurationViewControllerDelegate>)delegate;
-(UITableView *)tableView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)resultType;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<WFVariableConfigurationViewControllerDelegate>)arg1 ;
-(id)initWithVariable:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setProperties:(NSArray *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(WFVariableConfigurationHeaderView *)headerView;
-(void)loadView;
-(WFVariableConfigurationInfoView *)infoView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(WFVariable *)variable;
-(void)dealloc;
-(void)setInfoView:(WFVariableConfigurationInfoView *)arg1 ;
-(void)variableDidChange:(id)arg1 ;
-(void)variableContentClassesDidChange;
-(void)availableVariablesDidChange;
-(void)optionsViewController:(id)arg1 didSelectOption:(id)arg2 ;
-(CGRect)frameForConfigurationCell:(id)arg1 withProposedFrame:(CGRect)arg2 ;
-(void)headerViewTypeTapped:(id)arg1 ;
-(BOOL)variableSupportsCoercionAggrandizement;
-(Class)postCoercionContentClass;
-(void)updateHeaderView;
-(void)updateVisibleAggrandizements;
-(BOOL)hasMeasurementUnit;
-(id)currentPropertyMeasurementUnitType;
-(void)generateUpdatedVariable;
-(NSOrderedSet *)classesForVisibleAggrandizements;
-(void)setClassesForVisibleAggrandizements:(NSOrderedSet *)arg1 ;
-(BOOL)propertyListExpanded;
-(void)setPropertyListExpanded:(BOOL)arg1 ;
-(BOOL)userExplicitlySelectedDefaultProperty;
-(void)setUserExplicitlySelectedDefaultProperty:(BOOL)arg1 ;
-(WFCoercionVariableAggrandizement *)coercionAggrandizement;
-(void)setCoercionAggrandizement:(WFCoercionVariableAggrandizement *)arg1 ;
-(WFPropertyVariableAggrandizement *)propertyAggrandizement;
-(void)setPropertyAggrandizement:(WFPropertyVariableAggrandizement *)arg1 ;
-(WFDateFormatVariableAggrandizement *)dateFormatAggrandizement;
-(void)setDateFormatAggrandizement:(WFDateFormatVariableAggrandizement *)arg1 ;
-(WFDictionaryValueVariableAggrandizement *)dictionaryValueAggrandizement;
-(void)setDictionaryValueAggrandizement:(WFDictionaryValueVariableAggrandizement *)arg1 ;
-(WFUnitVariableAggrandizement *)unitAggrandizement;
-(void)setUnitAggrandizement:(WFUnitVariableAggrandizement *)arg1 ;
@end

