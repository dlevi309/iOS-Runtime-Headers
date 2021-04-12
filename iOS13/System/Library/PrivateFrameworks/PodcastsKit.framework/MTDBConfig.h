/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
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

