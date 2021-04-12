/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIDropInteractionDelegate_Private.h>

@protocol MFDropTargetDelegate;
@class NSSet, UIView, UIDropInteraction, NSString;

@interface MFDropTarget : NSObject <UIDropInteractionDelegate_Private> {

	struct {
		unsigned respondsToCanDropDraggedItemsAtPoint;
		unsigned respondsToDragEntered;
		unsigned respondsToDragExited;
		unsigned respondsToDragDidMoveToPoint;
		unsigned respondsToDidDropItemsAtPoint;
		unsigned respondsToDataOwner;
	}  _delegateFlags;
	NSSet* _acceptableUTIs;
	UIView* _targetView;
	id<MFDropTargetDelegate> _delegate;
	UIDropInteraction* _dropInteraction;

}

@property (assign,nonatomic,__weak) id<MFDropTargetDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * targetView;                            //@synthesize targetView=_targetView - In the implementation block
@property (nonatomic,retain) UIDropInteraction * dropInteraction;                   //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (nonatomic,copy) NSSet * acceptableUTIs;                                  //@synthesize acceptableUTIs=_acceptableUTIs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MFDropTargetDelegate>)delegate;
-(void)setDelegate:(id<MFDropTargetDelegate>)arg1 ;
-(id)initWithView:(id)arg1 delegate:(id)arg2 ;
-(UIView *)targetView;
-(void)_updateDelegateFlags;
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(UIDropInteraction *)dropInteraction;
-(void)setTargetView:(UIView *)arg1 ;
-(NSSet *)acceptableUTIs;
-(void)setAcceptableUTIs:(NSSet *)arg1 ;
-(BOOL)_delegateHandlesDrops;
-(BOOL)_sessionContainsOnlyAcceptableTypeIdentifiers:(id)arg1 ;
-(void)_delegateDidDropItemsWithDropSession:(id)arg1 ;
-(void)_dropSessionEnded;
-(BOOL)_delegateCanDropItemsWithDropSession:(id)arg1 ;
@end

