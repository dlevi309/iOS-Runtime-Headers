/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/

#import <Osprey/OspreyDeviceAuthenticating.h>

@class OspreyConnectionPreferences, OspreyPreferences, NSDictionary, NSString;

@interface OspreyDeviceAuthentication : NSObject <OspreyDeviceAuthenticating> {

	OspreyConnectionPreferences* _connectionPreferences;
	OspreyPreferences* _allPreferences;
	NSDictionary* _strategies;
	unsigned long long _currentStrategyVersion;
	BOOL _hasCurrentStrategyVersion;

}

@property (assign,nonatomic) unsigned long long currentStrategyVersion;              //@synthesize currentStrategyVersion=_currentStrategyVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_currentStrategy;
-(unsigned long long)authenticationStrategyVersion;
-(void)signData:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(unsigned long long)currentStrategyVersion;
-(id)initWithChannel:(id)arg1 connectionPreferences:(id)arg2 allPreferences:(id)arg3 ;
-(void)setCurrentStrategyVersion:(unsigned long long)arg1 ;
@end

