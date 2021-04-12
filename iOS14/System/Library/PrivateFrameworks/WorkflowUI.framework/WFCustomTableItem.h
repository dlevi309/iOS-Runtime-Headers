/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFTableItem.h>

@class NSMapTable;

@interface WFCustomTableItem : WFTableItem {

	/*^block*/id _configurationBlock;
	NSMapTable* _representedObjectChangeTargetSelectorTable;

}

@property (nonatomic,readonly) NSMapTable * representedObjectChangeTargetSelectorTable;              //@synthesize representedObjectChangeTargetSelectorTable=_representedObjectChangeTargetSelectorTable - In the implementation block
@property (nonatomic,retain) id representedObject; 
@property (nonatomic,copy,readonly) id configurationBlock;                                           //@synthesize configurationBlock=_configurationBlock - In the implementation block
-(void)setRepresentedObject:(id)arg1 ;
-(id)configurationBlock;
-(BOOL)isEqual:(id)arg1 ;
-(id)representedObject;
-(void)addRepresentedObjectChangeObserver:(id)arg1 action:(SEL)arg2 ;
-(void)configureCell:(id)arg1 ;
-(id)initWithCellClass:(Class)arg1 style:(long long)arg2 representedObject:(id)arg3 configurationBlock:(/*^block*/id)arg4 ;
-(void)setRepresentedObject:(id)arg1 updatingCell:(BOOL)arg2 ;
-(NSMapTable *)representedObjectChangeTargetSelectorTable;
@end

