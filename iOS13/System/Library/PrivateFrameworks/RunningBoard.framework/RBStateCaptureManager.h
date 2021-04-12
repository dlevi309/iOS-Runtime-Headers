/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/RBStateCaptureManaging.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, RBSStateCaptureSet, NSObject, NSString;

@interface RBStateCaptureManager : NSObject <RBStateCaptureManaging> {

	NSMutableDictionary* _itemsByIdentifier;
	RBSStateCaptureSet* _itemsWithoutIdentifiers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(id)identifiers;
-(id)stateForSubsystem:(id)arg1 ;
-(void)addItemWithTitle:(id)arg1 identifier:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)removeItemWithIdentifier:(id)arg1 ;
-(void)addItem:(id)arg1 withIdentifier:(id)arg2 ;
@end

