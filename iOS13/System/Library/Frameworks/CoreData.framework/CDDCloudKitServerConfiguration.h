/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PFCloudKitContainerProvider, CKScheduler;

@interface CDDCloudKitServerConfiguration : NSObject <NSSecureCoding> {

	NSString* _storeDirectoryPath;
	NSString* _machServiceName;
	PFCloudKitContainerProvider* _containerProvider;
	CKScheduler* _scheduler;

}

@property (nonatomic,retain) NSString * storeDirectoryPath;                                //@synthesize storeDirectoryPath=_storeDirectoryPath - In the implementation block
@property (nonatomic,retain) NSString * machServiceName;                                   //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,retain) PFCloudKitContainerProvider * containerProvider;              //@synthesize containerProvider=_containerProvider - In the implementation block
@property (nonatomic,retain) CKScheduler * scheduler;                                      //@synthesize scheduler=_scheduler - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMachServiceName:(NSString *)arg1 ;
-(NSString *)machServiceName;
-(NSString *)storeDirectoryPath;
-(PFCloudKitContainerProvider *)containerProvider;
-(CKScheduler *)scheduler;
-(void)setContainerProvider:(PFCloudKitContainerProvider *)arg1 ;
-(void)setStoreDirectoryPath:(NSString *)arg1 ;
-(id)initFromOriginal:(id)arg1 ;
-(void)setScheduler:(CKScheduler *)arg1 ;
@end

