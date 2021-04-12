/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class NSArray;

@interface IDSSignInServiceUserStatus : NSObject {

	unsigned long long _serviceType;
	NSArray* _serviceUserInfos;

}

@property (nonatomic,readonly) unsigned long long serviceType;                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) NSArray * serviceUserInfos;                        //@synthesize serviceUserInfos=_serviceUserInfos - In the implementation block
@property (nonatomic,readonly) unsigned long long phoneUserStatus; 
@property (nonatomic,readonly) unsigned long long appleIDUserStatus; 
-(id)description;
-(unsigned long long)serviceType;
-(id)initWithServiceType:(unsigned long long)arg1 userInfos:(id)arg2 ;
-(unsigned long long)phoneUserStatus;
-(unsigned long long)appleIDUserStatus;
-(NSArray *)serviceUserInfos;
@end

