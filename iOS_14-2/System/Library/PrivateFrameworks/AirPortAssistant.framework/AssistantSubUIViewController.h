/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/AUUITableViewController.h>

@class AssistantUIViewController, NSDictionary, NSMutableDictionary;

@interface AssistantSubUIViewController : AUUITableViewController {

	AssistantUIViewController* _parentController;
	NSDictionary* _inParamDict;
	NSMutableDictionary* _outResultsDict;

}

@property (assign,nonatomic) AssistantUIViewController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (nonatomic,retain) NSDictionary * inParamDict;                                //@synthesize inParamDict=_inParamDict - In the implementation block
@property (nonatomic,readonly) NSDictionary * outResultsDict;                           //@synthesize outResultsDict=_outResultsDict - In the implementation block
+(id)labelViewInContainer:(id*)arg1 width:(double)arg2 constrain:(BOOL)arg3 ;
+(id)labelViewInContainer:(id*)arg1 width:(double)arg2 ;
+(id)labelViewInContainer:(id*)arg1 width:(double)arg2 withSpinner:(id*)arg3 above:(BOOL)arg4 ;
+(id)topoViewWithWidth:(double)arg1 ;
+(id)containerViewWithWidth:(double)arg1 ;
+(id)tableViewWithWidth:(double)arg1 height:(double)arg2 ;
-(void)setParentController:(AssistantUIViewController *)arg1 ;
-(void)viewDidLoad;
-(AssistantUIViewController *)parentController;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setLeftNavigationButton:(id)arg1 enable:(BOOL)arg2 hide:(BOOL)arg3 ;
-(NSDictionary *)inParamDict;
-(void)setRightNavigationButton:(id)arg1 enable:(BOOL)arg2 hide:(BOOL)arg3 ;
-(id)getProductLocalizedStringWithFormat:(id)arg1 ;
-(void)setInParamDict:(NSDictionary *)arg1 ;
-(NSDictionary *)outResultsDict;
@end

