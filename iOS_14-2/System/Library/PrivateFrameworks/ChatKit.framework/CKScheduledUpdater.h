/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setNeedsUpdate;
-(BOOL)updateSynchronouslyIfPossible;
-(void)endHoldingAllUpdatesForKey:(id)arg1 ;
-(void)updateIfNeeded;
-(id)description;
-(void)invalidate;
-(NSCountedSet *)holdingUpdatesKeys;
-(void)setHoldingUpdatesKeys:(NSCountedSet *)arg1 ;
-(BOOL)isHoldingUpdates;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(BOOL)isHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingAllUpdates;
-(void)setUpdateSynchronouslyIfPossible:(BOOL)arg1 ;
-(void)dealloc;
@end

