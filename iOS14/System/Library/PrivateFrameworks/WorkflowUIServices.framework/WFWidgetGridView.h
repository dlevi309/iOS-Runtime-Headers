/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WFWidgetCellDelegate.h>

@protocol WFWidgetGridViewDelegate, OS_os_log;
@class NSMutableArray, NSObject, NSString;

@interface WFWidgetGridView : UIView <WFWidgetCellDelegate> {

	id<WFWidgetGridViewDelegate> _delegate;
	unsigned long long _sizeClass;
	double _cornerRadius;
	NSMutableArray* _cells;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,readonly) unsigned long long sizeClass;                            //@synthesize sizeClass=_sizeClass - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                                     //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) NSMutableArray * cells;                                  //@synthesize cells=_cells - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> log;                                //@synthesize log=_log - In the implementation block
@property (assign,nonatomic,__weak) id<WFWidgetGridViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)cells;
-(NSObject*<OS_os_log>)log;
-(id<WFWidgetGridViewDelegate>)delegate;
-(double)cornerRadius;
-(unsigned long long)sizeClass;
-(void)setDelegate:(id<WFWidgetGridViewDelegate>)arg1 ;
-(id)cellAtIndex:(unsigned long long)arg1 ;
-(void)widgetCellWasTapped:(id)arg1 ;
-(void)widgetCellDidTransitionToState:(long long)arg1 ;
-(id)initWithSizeClass:(unsigned long long)arg1 cornerRadius:(double)arg2 log:(id)arg3 ;
-(void)disableAllCellsExceptCell:(id)arg1 ;
-(void)enableAllCells;
-(id)cellForWorkflowWithIdentifier:(id)arg1 ;
-(id)workflowIdentifiersForVisibleCells;
-(void)layoutWithWorkflows:(id)arg1 ;
-(void)addCell:(id)arg1 ;
-(BOOL)cellExistsAtIndex:(unsigned long long)arg1 ;
-(id)currentSizeClassString;
@end

