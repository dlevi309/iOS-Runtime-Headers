/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFSetDiff.h>

@interface HFMutableSetDiff : HFSetDiff {

	BOOL _hasChanges;

}

@property (nonatomic,readonly) BOOL hasChanges;              //@synthesize hasChanges=_hasChanges - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)addObject:(id)arg1 ;
-(BOOL)hasChanges;
-(void)deleteObject:(id)arg1 ;
-(void)updateObject:(id)arg1 ;
-(void)deleteAllObjects;
-(id)initWithFromSet:(id)arg1 ;
-(void)_updateHasChanges;
@end

