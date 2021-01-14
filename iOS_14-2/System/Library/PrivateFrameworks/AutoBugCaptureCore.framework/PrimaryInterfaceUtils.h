/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


@class NSDate, NSString;

@interface PrimaryInterfaceUtils : NSObject {

	BOOL _hasPrimaryInterface;
	NSDate* _interfaceBecamePrimaryDate;
	NSDate* _estimatedInterfaceBecamePrimaryDate;
	long long _primaryInterfaceType;

}

@property (nonatomic,readonly) BOOL hasPrimaryInterface;                                  //@synthesize hasPrimaryInterface=_hasPrimaryInterface - In the implementation block
@property (nonatomic,readonly) long long primaryInterfaceType;                            //@synthesize primaryInterfaceType=_primaryInterfaceType - In the implementation block
@property (nonatomic,readonly) NSString * primaryInterfaceTypeString; 
@property (nonatomic,readonly) NSDate * interfaceBecamePrimaryDate;                       //@synthesize interfaceBecamePrimaryDate=_interfaceBecamePrimaryDate - In the implementation block
@property (nonatomic,readonly) NSDate * estimatedInterfaceBecamePrimaryDate;              //@synthesize estimatedInterfaceBecamePrimaryDate=_estimatedInterfaceBecamePrimaryDate - In the implementation block
+(id)sharedInstance;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(NSDate *)interfaceBecamePrimaryDate;
-(long long)primaryInterfaceType;
-(void)_setHasPrimaryInterface:(BOOL)arg1 ;
-(void)_setPrimaryInterfaceType:(long long)arg1 ;
-(void)_setInterfaceBecamePrimaryDate:(id)arg1 ;
-(void)_setEstimatedInterfaceBecamePrimaryDate:(id)arg1 ;
-(void)getDefaultPathInfoUsingSecondsSinceChange;
-(BOOL)hasPrimaryInterface;
-(NSDate *)estimatedInterfaceBecamePrimaryDate;
-(NSString *)primaryInterfaceTypeString;
@end

