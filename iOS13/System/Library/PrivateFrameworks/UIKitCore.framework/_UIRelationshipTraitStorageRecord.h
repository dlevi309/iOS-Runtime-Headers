/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UITraitCollection, NSSet;

@interface _UIRelationshipTraitStorageRecord : NSObject <NSCoding> {

	UITraitCollection* _traitCollection;
	NSSet* _addedObjects;
	NSSet* _removedObjects;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) NSSet * addedObjects;                             //@synthesize addedObjects=_addedObjects - In the implementation block
@property (nonatomic,readonly) NSSet * removedObjects;                           //@synthesize removedObjects=_removedObjects - In the implementation block
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UITraitCollection *)traitCollection;
-(id)initWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3 ;
-(NSSet *)addedObjects;
-(NSSet *)removedObjects;
@end

