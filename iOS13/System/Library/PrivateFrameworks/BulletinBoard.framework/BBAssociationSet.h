/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@class NSString;

@interface BBAssociationSet : NSObject {

	NSString* _associationSetKey;
	unsigned long long _associatedObjectMemoryPointerFunction;

}
+(id)setWithStrongAssociation;
+(id)setWithWeakAssociation;
-(id)associatedObjectsForObject:(id)arg1 ;
-(void)associateObject:(id)arg1 withObject:(id)arg2 ;
-(void)copyAssociationsForObject:(id)arg1 toObject:(id)arg2 ;
-(id)_initWithMemoryPointerFunction:(unsigned long long)arg1 ;
@end

