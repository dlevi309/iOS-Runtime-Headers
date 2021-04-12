/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/ADIDManager_XPC.h>

@class DSIDRecord, NSDictionary, NSArray;

@interface ADIDManager : ADSingleton <ADIDManager_XPC> {

	DSIDRecord* _activeDSIDRecord;
	NSDictionary* _usageVectors;
	NSArray* _monthlyResetArray;

}

@property (retain) NSArray * monthlyResetArray;                                       //@synthesize monthlyResetArray=_monthlyResetArray - In the implementation block
@property (nonatomic,retain) NSDictionary * usageVectors;                             //@synthesize usageVectors=_usageVectors - In the implementation block
@property (retain) DSIDRecord * activeDSIDRecord;                                     //@synthesize activeDSIDRecord=_activeDSIDRecord - In the implementation block
@property (nonatomic,readonly) long long PersonalizedAdsMonthResetCount; 
+(id)sharedInstance;
-(id)init;
-(void)forceReconcile:(/*^block*/id)arg1 ;
-(BOOL)loadIDs;
-(void)logIDs:(id)arg1 ;
-(id)deviceIdentifiers;
-(id)reloadRecords:(id)arg1 ;
-(id)loadFakeRecord:(id)arg1 ;
-(id)dsidRecord:(id)arg1 fromDict:(id)arg2 ;
-(void)setActiveDSIDRecord:(DSIDRecord *)arg1 ;
-(DSIDRecord *)activeDSIDRecord;
-(id)idForClientType:(long long)arg1 ;
-(id)encryptedIDForClientType:(long long)arg1 ;
-(id)readUsageVectors:(id)arg1 ;
-(long long)PersonalizedAdsMonthResetCount;
-(void)reloadRecords:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)retrieveDeviceIDs;
-(NSDictionary *)usageVectors;
-(void)setUsageVectors:(NSDictionary *)arg1 ;
-(NSArray *)monthlyResetArray;
-(void)setMonthlyResetArray:(NSArray *)arg1 ;
@end

