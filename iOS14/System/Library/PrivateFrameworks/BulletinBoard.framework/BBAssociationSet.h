/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@class NSString;

@interface BBAssociationSet : NSObject {

	NSString* _associationSetKey;
	unsigned long long _associatedObjectMemoryPointerFunction;

}
+(id)setWithWeakAssociation;
+(id)setWithStrongAssociation;
-(void)associateObject:(id)arg1 withObject:(id)arg2 ;
-(void)copyAssociationsForObject:(id)arg1 toObject:(id)arg2 ;
-(id)_initWithMemoryPointerFunction:(unsigned long long)arg1 ;
-(id)associatedObjectsForObject:(id)arg1 ;
@end

