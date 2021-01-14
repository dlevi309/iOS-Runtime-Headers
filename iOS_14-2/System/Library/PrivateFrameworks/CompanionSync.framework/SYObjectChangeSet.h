/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@class NSMutableSet;

@interface SYObjectChangeSet : NSObject {

	NSMutableSet* _added;
	NSMutableSet* _updated;
	NSMutableSet* _deleted;

}

@property (nonatomic,copy) NSMutableSet * added;                //@synthesize added=_added - In the implementation block
@property (nonatomic,copy) NSMutableSet * updated;              //@synthesize updated=_updated - In the implementation block
@property (nonatomic,copy) NSMutableSet * deleted;              //@synthesize deleted=_deleted - In the implementation block
-(NSMutableSet *)added;
-(id)init;
-(NSMutableSet *)deleted;
-(NSMutableSet *)updated;
-(void)setUpdated:(NSMutableSet *)arg1 ;
-(void)setAdded:(NSMutableSet *)arg1 ;
-(void)setDeleted:(NSMutableSet *)arg1 ;
-(id)changesBetween:(id)arg1 and:(id)arg2 ;
-(id)initWithChangesBetween:(id)arg1 and:(id)arg2 ;
-(void)applyToStore:(id)arg1 ;
@end

