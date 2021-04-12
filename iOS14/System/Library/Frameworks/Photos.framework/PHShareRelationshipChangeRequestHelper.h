/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHRelationshipChangeRequestHelper.h>

@protocol PHShare;
@class PHObject;

@interface PHShareRelationshipChangeRequestHelper : PHRelationshipChangeRequestHelper {

	PHObject*<PHShare> _originalShare;

}

@property (assign,nonatomic,__weak) PHObject*<PHShare> originalShare;              //@synthesize originalShare=_originalShare - In the implementation block
-(void)setOriginalShare:(PHObject*<PHShare>)arg1 ;
-(id)initWithChangeRequestHelper:(id)arg1 ;
-(PHObject*<PHShare>)originalShare;
-(id)initWithXpcDict:(id)arg1 changeRequestHelper:(id)arg2 ;
-(void)_prepareParticipantsWithFetchResult:(id)arg1 ;
-(void)_prepareParticipantsHelperIfNeeded;
-(id)_mutableParticipantsObjectIDsAndUUIDs;
-(void)addParticipants:(id)arg1 toChangeRequest:(id)arg2 ;
-(void)removeParticipants:(id)arg1 toChangeRequest:(id)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
@end

