/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSSet;

@interface _UITraitStorageList : NSObject <NSCoding> {

	id _topLevelObject;
	NSArray* _traitStorages;
	NSSet* _descendants;

}

@property (nonatomic,__weak,readonly) id topLevelObject;              //@synthesize topLevelObject=_topLevelObject - In the implementation block
@property (nonatomic,readonly) NSArray * traitStorages;               //@synthesize traitStorages=_traitStorages - In the implementation block
@property (nonatomic,readonly) NSSet * descendants;                   //@synthesize descendants=_descendants - In the implementation block
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)topLevelObject;
-(NSArray *)traitStorages;
-(id)initWithTopLevelObject:(id)arg1 traitStorages:(id)arg2 descendants:(id)arg3 ;
-(NSSet *)descendants;
@end

