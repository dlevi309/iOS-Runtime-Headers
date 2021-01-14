/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/

#import <IMFoundation/IMManualUpdater.h>

@class NSCountedSet;

@interface IMScheduledUpdater : IMManualUpdater {

	NSCountedSet* _holdingUpdatesKeys;

}

@property (nonatomic,retain) NSCountedSet * holdingUpdatesKeys;              //@synthesize holdingUpdatesKeys=_holdingUpdatesKeys - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setNeedsUpdate;
-(void)updateIfNeeded;
-(id)description;
-(void)invalidate;
-(NSCountedSet *)holdingUpdatesKeys;
-(void)setHoldingUpdatesKeys:(NSCountedSet *)arg1 ;
-(BOOL)isHoldingUpdates;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingUpdatesForAllKeys;
-(BOOL)isHoldingUpdatesForKey:(id)arg1 ;
-(void)dealloc;
@end

