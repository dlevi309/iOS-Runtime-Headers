/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UIDragInteractionDelegate.h>

@protocol SXDragManagerDataSource;
@class UIDragInteraction, NSString;

@interface SXDragManager : NSObject <UIDragInteractionDelegate> {

	BOOL _enabled;
	id<SXDragManagerDataSource> _dataSource;
	unsigned long long _sharingPolicy;
	UIDragInteraction* _dragInteraction;

}

@property (nonatomic,readonly) unsigned long long sharingPolicy;                         //@synthesize sharingPolicy=_sharingPolicy - In the implementation block
@property (nonatomic,readonly) UIDragInteraction * dragInteraction;                      //@synthesize dragInteraction=_dragInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<SXDragManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                               //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)enabled;
-(UIDragInteraction *)dragInteraction;
-(void)setEnabled:(BOOL)arg1 ;
-(id<SXDragManagerDataSource>)dataSource;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)setDataSource:(id<SXDragManagerDataSource>)arg1 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(void)dealloc;
-(id)initWithSharingPolicy:(unsigned long long)arg1 dataSource:(id)arg2 ;
-(void)updateAccessibilityDragSourceDescriptorsForDraggableElement:(id)arg1 ;
-(unsigned long long)sharingPolicy;
-(id)itemsForSession:(id)arg1 atLocation:(CGPoint)arg2 ;
-(id)dragItemForObject:(id)arg1 withSession:(id)arg2 ;
-(BOOL)dragSession:(id)arg1 containsDragItemWithIdentifier:(id)arg2 ;
@end

