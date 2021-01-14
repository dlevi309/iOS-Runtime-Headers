/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class NSString;

@interface HMDBackingStoreCacheCreateZoneOperation : HMDBackingStoreOperation {

	NSString* _zoneName;
	/*^block*/id _creationBlock;

}

@property (nonatomic,retain) NSString * zoneName;              //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,copy) id creationBlock;                   //@synthesize creationBlock=_creationBlock - In the implementation block
-(void)setCreationBlock:(id)arg1 ;
-(id)creationBlock;
-(NSString *)zoneName;
-(void)setZoneName:(NSString *)arg1 ;
-(id)initWithZoneName:(id)arg1 creationBlock:(/*^block*/id)arg2 ;
-(id)mainReturningError;
@end

