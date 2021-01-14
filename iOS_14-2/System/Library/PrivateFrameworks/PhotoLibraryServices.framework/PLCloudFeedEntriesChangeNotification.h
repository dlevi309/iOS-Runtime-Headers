/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSSet;

@interface PLCloudFeedEntriesChangeNotification : PLChangeNotification {

	BOOL _shouldReload;
	NSSet* _insertedEntries;
	NSSet* _updatedEntries;
	NSSet* _deletedEntries;

}

@property (assign,nonatomic) BOOL shouldReload;                  //@synthesize shouldReload=_shouldReload - In the implementation block
@property (nonatomic,copy) NSSet * insertedEntries;              //@synthesize insertedEntries=_insertedEntries - In the implementation block
@property (nonatomic,copy) NSSet * updatedEntries;               //@synthesize updatedEntries=_updatedEntries - In the implementation block
@property (nonatomic,copy) NSSet * deletedEntries;               //@synthesize deletedEntries=_deletedEntries - In the implementation block
+(id)notificationWithFullReload;
+(id)notificationWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3 ;
-(id)userInfo;
-(id)object;
-(id)_initWithFullReload;
-(id)_initWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3 ;
-(NSSet *)insertedEntries;
-(void)setInsertedEntries:(NSSet *)arg1 ;
-(NSSet *)updatedEntries;
-(void)setUpdatedEntries:(NSSet *)arg1 ;
-(NSSet *)deletedEntries;
-(void)setDeletedEntries:(NSSet *)arg1 ;
-(BOOL)shouldReload;
-(id)name;
-(void)setShouldReload:(BOOL)arg1 ;
@end

