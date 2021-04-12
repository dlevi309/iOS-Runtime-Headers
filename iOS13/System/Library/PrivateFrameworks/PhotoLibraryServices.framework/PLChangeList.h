/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableSet;

@interface PLChangeList : NSObject {

	NSMutableSet* _inserted;
	NSMutableSet* _updated;
	NSMutableSet* _deleted;

}

@property (nonatomic,retain) NSMutableSet * inserted;              //@synthesize inserted=_inserted - In the implementation block
@property (nonatomic,retain) NSMutableSet * updated;               //@synthesize updated=_updated - In the implementation block
@property (nonatomic,retain) NSMutableSet * deleted;               //@synthesize deleted=_deleted - In the implementation block
-(void)cleanupState;
-(NSMutableSet *)deleted;
-(void)setDeleted:(NSMutableSet *)arg1 ;
-(NSMutableSet *)inserted;
-(void)setInserted:(NSMutableSet *)arg1 ;
-(NSMutableSet *)updated;
-(void)setUpdated:(NSMutableSet *)arg1 ;
@end

