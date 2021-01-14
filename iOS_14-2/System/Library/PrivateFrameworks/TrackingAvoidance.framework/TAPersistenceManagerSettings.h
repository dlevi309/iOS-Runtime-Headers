/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class NSURL, NSString;

@interface TAPersistenceManagerSettings : NSObject {

	NSURL* _persistenceDirectoryURL;
	NSString* _persistenceStoreFileName;

}

@property (nonatomic,retain) NSURL * persistenceDirectoryURL;                  //@synthesize persistenceDirectoryURL=_persistenceDirectoryURL - In the implementation block
@property (nonatomic,retain) NSString * persistenceStoreFileName;              //@synthesize persistenceStoreFileName=_persistenceStoreFileName - In the implementation block
-(id)init;
-(id)initWithDirectoryURLOrDefault:(id)arg1 storeFileNameOrDefault:(id)arg2 ;
-(NSURL *)persistenceDirectoryURL;
-(NSString *)persistenceStoreFileName;
-(id)_getStoreURL;
-(void)setPersistenceDirectoryURL:(NSURL *)arg1 ;
-(void)setPersistenceStoreFileName:(NSString *)arg1 ;
@end

