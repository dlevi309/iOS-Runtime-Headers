/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSSet *)descendants;
-(id)topLevelObject;
-(NSArray *)traitStorages;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTopLevelObject:(id)arg1 traitStorages:(id)arg2 descendants:(id)arg3 ;
@end

