/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UICommandChange.h>

@class _UICommandIdentifier;

@interface _UICommandItemDeletion : _UICommandChange

@property (nonatomic,readonly) _UICommandIdentifier * anchor; 
+(id)deletionWithAnchor:(id)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(void)acceptItemInsertionVisit:(/*^block*/id)arg1 itemDeletionVisit:(/*^block*/id)arg2 menuInsertionVisit:(/*^block*/id)arg3 menuDeletionVisit:(/*^block*/id)arg4 ;
-(BOOL)acceptBoolItemInsertionVisit:(/*^block*/id)arg1 itemDeletionVisit:(/*^block*/id)arg2 menuInsertionVisit:(/*^block*/id)arg3 menuDeletionVisit:(/*^block*/id)arg4 ;
@end

