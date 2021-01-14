/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <CarPlaySupport/CPSBaseTemplateViewController.h>
#import <libobjc.A.dylib/CPSEntityActionDelegate.h>
#import <libobjc.A.dylib/CPEntityUpdateProviding.h>

@class CPEntity, CPSBaseEntityContentViewController, NSMapTable, CPSEntityResourceProvider, NSString;

@interface CPSEntityViewController : CPSBaseTemplateViewController <CPSEntityActionDelegate, CPEntityUpdateProviding> {

	CPEntity* _entity;
	CPSBaseEntityContentViewController* _contentViewController;
	NSMapTable* _buttonMap;
	CPSEntityResourceProvider* _resourceProvider;

}

@property (nonatomic,readonly) CPEntity * entity;                                                       //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) CPSBaseEntityContentViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) NSMapTable * buttonMap;                                                    //@synthesize buttonMap=_buttonMap - In the implementation block
@property (nonatomic,retain) CPSEntityResourceProvider * resourceProvider;                              //@synthesize resourceProvider=_resourceProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CPEntity *)entity;
-(CPSEntityResourceProvider *)resourceProvider;
-(void)setupViewControllers;
-(CPSBaseEntityContentViewController *)contentViewController;
-(void)setButtonMap:(NSMapTable *)arg1 ;
-(NSMapTable *)buttonMap;
-(void)updateEntityTemplate:(id)arg1 withProxyDelegate:(id)arg2 ;
-(void)setResourceProvider:(CPSEntityResourceProvider *)arg1 ;
-(void)_viewDidLoad;
-(id)entityTemplate;
-(BOOL)entityContentViewController:(id)arg1 didPressButton:(id)arg2 forPOI:(id)arg3 ;
-(id)initWithEntityTemplate:(id)arg1 templateDelegate:(id)arg2 templateEnvironment:(id)arg3 ;
-(BOOL)entityContentViewController:(id)arg1 regionDidChange:(SCD_Struct_CP5)arg2 ;
-(BOOL)entityContentViewController:(id)arg1 didSelectPointOfInterestWithIdentifier:(id)arg2 ;
-(BOOL)entityContentViewController:(id)arg1 didPressButton:(id)arg2 forEntity:(id)arg3 ;
-(id)entityTemplateDelegate;
-(void)trailingBarButtonPressed:(id)arg1 ;
@end

