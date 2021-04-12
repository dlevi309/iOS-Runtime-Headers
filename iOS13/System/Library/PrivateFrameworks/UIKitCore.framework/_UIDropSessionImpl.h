/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDropSession.h>
#import <UIKitCore/_UIDragDropSessionInternal.h>
#import <UIKitCore/_UIDropSessionPrivate.h>

@protocol UIDragSession;
@class NSArray, _UIInternalDraggingSessionDestination, NSString, NSProgress;

@interface _UIDropSessionImpl : NSObject <UIDropSession, _UIDragDropSessionInternal, _UIDropSessionPrivate> {

	NSArray* _items;
	id<UIDragSession> _localDragSession;
	unsigned long long _progressIndicatorStyle;
	_UIInternalDraggingSessionDestination* _sessionDestination;

}

@property (nonatomic,readonly) _UIInternalDraggingSessionDestination * sessionDestination;                                 //@synthesize sessionDestination=_sessionDestination - In the implementation block
@property (getter=_operationMask,nonatomic,readonly) unsigned long long operationMask; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) BOOL allowsMoveOperation; 
@property (getter=isRestrictedToDraggingApplication,nonatomic,readonly) BOOL restrictedToDraggingApplication; 
@property (readonly) NSProgress * progress; 
@property (nonatomic,readonly) id<UIDragSession> localDragSession;                                                         //@synthesize localDragSession=_localDragSession - In the implementation block
@property (assign,nonatomic) unsigned long long progressIndicatorStyle;                                                    //@synthesize progressIndicatorStyle=_progressIndicatorStyle - In the implementation block
@property (nonatomic,readonly) long long _dataOwner; 
@property (getter=_allowsItemsToUpdate,nonatomic,readonly) BOOL _allowsItemsToUpdate; 
@property (getter=_drivenByPointer,nonatomic,readonly) BOOL drivenByPointer; 
-(NSProgress *)progress;
-(NSArray *)items;
-(CGPoint)locationInView:(id)arg1 ;
-(id<UIDragSession>)localDragSession;
-(BOOL)allowsMoveOperation;
-(long long)_dataOwner;
-(_UIInternalDraggingSessionDestination *)sessionDestination;
-(void)_itemsNeedUpdate:(id)arg1 ;
-(BOOL)hasItemsConformingToTypeIdentifiers:(id)arg1 ;
-(BOOL)canLoadObjectsOfClass:(Class)arg1 ;
-(BOOL)isRestrictedToDraggingApplication;
-(id)_internalSession;
-(BOOL)_allowsItemsToUpdate;
-(void)setProgressIndicatorStyle:(unsigned long long)arg1 ;
-(id)_createItemsOfClass:(Class)arg1 synchronouslyIfPossible:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestVisibleItems:(/*^block*/id)arg1 ;
-(id)loadObjectsOfClass:(Class)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)progressIndicatorStyle;
-(BOOL)_drivenByPointer;
-(id)initWithSessionDestination:(id)arg1 ;
-(unsigned long long)_operationMask;
@end

