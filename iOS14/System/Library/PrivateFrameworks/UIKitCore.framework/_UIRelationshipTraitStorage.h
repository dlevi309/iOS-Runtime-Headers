/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UITraitStorage.h>

@class NSOrderedSet;

@interface _UIRelationshipTraitStorage : _UITraitStorage {

	NSOrderedSet* _relationshipCandidates;

}
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_propertyDescriptionString;
-(void)applyRecordsMatchingTraitCollection:(id)arg1 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 relationshipCandidates:(id)arg3 ;
-(void)addRecordWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3 ;
@end

