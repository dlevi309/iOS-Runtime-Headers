/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLRelationshipOrderingState : NSObject {

	id _oids;
	id _foks;
	BOOL _isMutable;

}
-(id)description;
-(id)initWithObjectIDs:(id)arg1 orderValues:(id)arg2 ;
-(unsigned long long)indexForObjectID:(id)arg1 ;
-(BOOL)setOrderValue:(long long)arg1 forObjectID:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)orderKeys;
-(id)objectIDs;
-(unsigned long long)findIndexForObjectID:(id)arg1 newOrderValue:(long long)arg2 hasOrderValueConflictWithObjectID:(id*)arg3 ;
@end

