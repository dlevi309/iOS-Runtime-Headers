/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSMutableSet *)deleted;
-(void)setDeleted:(NSMutableSet *)arg1 ;
-(void)setAdded:(NSMutableSet *)arg1 ;
-(NSMutableSet *)added;
-(NSMutableSet *)updated;
-(void)setUpdated:(NSMutableSet *)arg1 ;
-(id)changesBetween:(id)arg1 and:(id)arg2 ;
-(id)initWithChangesBetween:(id)arg1 and:(id)arg2 ;
-(void)applyToStore:(id)arg1 ;
@end

