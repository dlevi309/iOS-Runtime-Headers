/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)zoneName;
-(void)setZoneName:(NSString *)arg1 ;
-(void)setCreationBlock:(id)arg1 ;
-(id)creationBlock;
-(id)initWithZoneName:(id)arg1 creationBlock:(/*^block*/id)arg2 ;
-(id)mainReturningError;
@end

