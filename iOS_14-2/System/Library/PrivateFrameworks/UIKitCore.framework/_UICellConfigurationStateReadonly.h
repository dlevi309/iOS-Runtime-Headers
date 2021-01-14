/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICellConfigurationStateReadonly <_UIViewConfigurationStateReadonly>
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (getter=isExpanded,nonatomic,readonly) BOOL expanded; 
@property (getter=isSwiped,nonatomic,readonly) BOOL swiped; 
@property (getter=isReordering,nonatomic,readonly) BOOL reordering; 
@property (nonatomic,readonly) long long cellDragState; 
@property (nonatomic,readonly) long long cellDropState; 
@required
-(BOOL)isExpanded;
-(BOOL)isSwiped;
-(BOOL)isEditing;
-(long long)cellDragState;
-(BOOL)isReordering;
-(long long)cellDropState;

@end

