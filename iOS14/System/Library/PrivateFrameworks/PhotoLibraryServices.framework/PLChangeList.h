/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableSet *)updated;
-(void)setInserted:(NSMutableSet *)arg1 ;
-(void)setUpdated:(NSMutableSet *)arg1 ;
-(NSMutableSet *)inserted;
-(void)setDeleted:(NSMutableSet *)arg1 ;
@end

