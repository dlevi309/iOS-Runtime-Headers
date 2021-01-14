/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <libobjc.A.dylib/MTCoreDataContainerConfigProvider.h>

@class NSManagedObjectModel;

@interface MTDBConfig : NSObject <MTCoreDataContainerConfigProvider> {

	NSManagedObjectModel* _model;

}

@property (nonatomic,retain) NSManagedObjectModel * model;              //@synthesize model=_model - In the implementation block
-(NSManagedObjectModel *)model;
-(void)setModel:(NSManagedObjectModel *)arg1 ;
-(id)managedObjectModel;
-(id)databaseFileUrl;
-(id)peristentStoreOptions;
@end

