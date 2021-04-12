/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKManualUpdater.h>

@class NSCountedSet;

@interface CKScheduledUpdater : CKManualUpdater {

	BOOL _updateSynchronouslyIfPossible;
	NSCountedSet* _holdingUpdatesKeys;

}

@property (nonatomic,retain) NSCountedSet * holdingUpdatesKeys;               //@synthesize holdingUpdatesKeys=_holdingUpdatesKeys - In the implementation block
@property (assign,nonatomic) BOOL updateSynchronouslyIfPossible;              //@synthesize updateSynchronouslyIfPossible=_updateSynchronouslyIfPossible - In the implementation block
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setNeedsUpdate;
-(void)updateIfNeeded;
-(NSCountedSet *)holdingUpdatesKeys;
-(void)setHoldingUpdatesKeys:(NSCountedSet *)arg1 ;
-(BOOL)isHoldingUpdates;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(BOOL)isHoldingUpdatesForKey:(id)arg1 ;
-(void)setUpdateSynchronouslyIfPossible:(BOOL)arg1 ;
-(void)endHoldingAllUpdatesForKey:(id)arg1 ;
-(void)endHoldingAllUpdates;
-(BOOL)updateSynchronouslyIfPossible;
@end

