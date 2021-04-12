/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(UIDropInteraction *)dropInteraction;
-(id)initWithView:(id)arg1 delegate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(id<MFDropTargetDelegate>)delegate;
-(long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(UIView *)targetView;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)setAcceptableUTIs:(NSSet *)arg1 ;
-(NSSet *)acceptableUTIs;
-(void)setDelegate:(id<MFDropTargetDelegate>)arg1 ;
-(BOOL)_delegateHandlesDrops;
-(BOOL)_sessionContainsOnlyAcceptableTypeIdentifiers:(id)arg1 ;
-(void)_delegateDidDropItemsWithDropSession:(id)arg1 ;
-(void)_dropSessionEnded;
-(BOOL)_delegateCanDropItemsWithDropSession:(id)arg1 ;
-(void)setTargetView:(UIView *)arg1 ;
-(void)_updateDelegateFlags;
@end

