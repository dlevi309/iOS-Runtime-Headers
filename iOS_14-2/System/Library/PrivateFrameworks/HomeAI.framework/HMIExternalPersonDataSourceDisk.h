/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HMIPersonDataSourceDisk.h>
#import <libobjc.A.dylib/HMIExternalPersonManagerDataSource.h>

@class NSString;

@interface HMIExternalPersonDataSourceDisk : HMIPersonDataSourceDisk <HMIExternalPersonManagerDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)fetchSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)addPersonFaceCrops:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addPerson:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

