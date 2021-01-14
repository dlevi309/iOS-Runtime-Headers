/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLRelationshipOrderingState : NSObject {

	id _oids;
	id _foks;
	BOOL _isMutable;

}
-(id)objectIDs;
-(id)description;
-(unsigned long long)indexForObjectID:(id)arg1 ;
-(id)initWithObjectIDs:(id)arg1 orderValues:(id)arg2 ;
-(BOOL)setOrderValue:(long long)arg1 forObjectID:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(unsigned long long)findIndexForObjectID:(id)arg1 newOrderValue:(long long)arg2 hasOrderValueConflictWithObjectID:(id*)arg3 ;
-(id)orderKeys;
@end

