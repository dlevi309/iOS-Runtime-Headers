/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNAvatarCardActionListController.h>
#import <libobjc.A.dylib/CNUINavigationListViewControllerDelegate.h>
#import <libobjc.A.dylib/CNUIUserActionListConsumer.h>

@protocol CNUIUserActionListDataSource, CNContactActionsControllerDelegate, CNUINavigationListStyle;
@class CNContact, NSDictionary, NSArray, UIViewController, NSString;

@interface CNContactActionsController : NSObject <CNAvatarCardActionListController, CNUINavigationListViewControllerDelegate, CNUIUserActionListConsumer> {

	BOOL _shouldUseOutlinedActionGlyphStyle;
	CNContact* _contact;
	id<CNUIUserActionListDataSource> _actionsDataSource;
	NSDictionary* _modelsByActionTypes;
	NSArray* _modelCancelables;
	UIViewController* _viewController;
	id<CNContactActionsControllerDelegate> _delegate;
	id<CNUINavigationListStyle> _navigationListStyle;
	long long _actionsOrder;
	NSArray* _actionTypes;

}

@property (assign,nonatomic) BOOL actionsReversed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CNContact * contact;                                                 //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) id<CNUIUserActionListDataSource> actionsDataSource;                  //@synthesize actionsDataSource=_actionsDataSource - In the implementation block
@property (nonatomic,copy) NSDictionary * modelsByActionTypes;                                    //@synthesize modelsByActionTypes=_modelsByActionTypes - In the implementation block
@property (nonatomic,retain) NSArray * modelCancelables;                                          //@synthesize modelCancelables=_modelCancelables - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                                   //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactActionsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNUINavigationListStyle> navigationListStyle;              //@synthesize navigationListStyle=_navigationListStyle - In the implementation block
@property (assign,nonatomic) long long actionsOrder;                                              //@synthesize actionsOrder=_actionsOrder - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actionTypes;                                        //@synthesize actionTypes=_actionTypes - In the implementation block
@property (assign,nonatomic) BOOL shouldUseOutlinedActionGlyphStyle;                              //@synthesize shouldUseOutlinedActionGlyphStyle=_shouldUseOutlinedActionGlyphStyle - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)supportedActionTypes;
-(void)setViewController:(UIViewController *)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id<CNContactActionsControllerDelegate>)delegate;
-(void)styleUpdated;
-(void)setNavigationListStyle:(id<CNUINavigationListStyle>)arg1 ;
-(id<CNUINavigationListStyle>)navigationListStyle;
-(void)setDelegate:(id<CNContactActionsControllerDelegate>)arg1 ;
-(UIViewController *)viewController;
-(BOOL)actionsReversed;
-(void)navigationListController:(id)arg1 didSelectItem:(id)arg2 ;
-(void)retrieveModels;
-(id)initWithContact:(id)arg1 actionTypes:(id)arg2 ;
-(id)initWithContact:(id)arg1 dataSource:(id)arg2 actionTypes:(id)arg3 ;
-(void)cancelModels;
-(id)displayedController;
-(id)modelForActionType:(id)arg1 ;
-(void)setActionsOrder:(long long)arg1 ;
-(id)imageForActionType:(id)arg1 ;
-(id)navigationListItemForUserActionType:(id)arg1 ;
-(void)prepareNavigationListItems;
-(id<CNUIUserActionListDataSource>)actionsDataSource;
-(void)generateMenuForItem:(id)arg1 image:(id)arg2 withCurrentList:(id)arg3 ;
-(id)actionForItem:(id)arg1 withImage:(id)arg2 ;
-(long long)actionsOrder;
-(BOOL)shouldUseOutlinedActionGlyphStyle;
-(void)setShouldUseOutlinedActionGlyphStyle:(BOOL)arg1 ;
-(void)setActionsDataSource:(id<CNUIUserActionListDataSource>)arg1 ;
-(NSDictionary *)modelsByActionTypes;
-(void)setModelsByActionTypes:(NSDictionary *)arg1 ;
-(NSArray *)actionTypes;
-(NSArray *)modelCancelables;
-(void)setModelCancelables:(NSArray *)arg1 ;
-(void)setActionsReversed:(BOOL)arg1 ;
-(void)dealloc;
@end

