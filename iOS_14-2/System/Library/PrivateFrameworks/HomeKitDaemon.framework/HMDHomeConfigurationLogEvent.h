/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSArray, NSString;

@interface HMDHomeConfigurationLogEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _isResidentCapable;
	BOOL _isResidentEnabled;
	BOOL _isDemoHomeConfigured;
	unsigned _databaseSize;
	unsigned _metadataVersion;
	NSArray* _homeConfigurations;
	unsigned long long _version;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * homeConfigurations;                    //@synthesize homeConfigurations=_homeConfigurations - In the implementation block
@property (assign,nonatomic) unsigned long long version;              //@synthesize version=_version - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)identifier;
-(id)init;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithHomes:(id)arg1 ;
-(void)logAWDEventDescription;
-(NSArray *)homeConfigurations;
-(id)generateAWDHomeConfiguration:(id)arg1 ;
-(id)getHomeConfiguration:(id)arg1 ;
-(id)convertToAWDHAPServiceList:(id)arg1 ;
-(id)convertToAWDMultiUserSettingsList:(id)arg1 ;
-(int)convertToAWDNetworkProtectionStatus:(int)arg1 ;
-(id)convertToAWDHAPService:(id)arg1 ;
-(id)convertToAWDMultiUserSettings:(id)arg1 ;
-(int)convertToAWDMultiUserValueType:(int)arg1 ;
@end

