/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@class MAAssetQuery, NSString;

@interface SFDeviceQueryParameters : NSObject {

	BOOL _installedOnly;
	BOOL _imperfectMatch;
	BOOL _fallback;
	MAAssetQuery* _maQuery;

}

@property (nonatomic,readonly) MAAssetQuery * maQuery;              //@synthesize maQuery=_maQuery - In the implementation block
@property (nonatomic,readonly) BOOL installedOnly;                  //@synthesize installedOnly=_installedOnly - In the implementation block
@property (nonatomic,readonly) BOOL imperfectMatch;                 //@synthesize imperfectMatch=_imperfectMatch - In the implementation block
@property (nonatomic,readonly) BOOL fallback;                       //@synthesize fallback=_fallback - In the implementation block
@property (nonatomic,readonly) NSString * queryType; 
-(MAAssetQuery *)maQuery;
-(id)initWithDeviceAssetQuery:(id)arg1 installedOnly:(BOOL)arg2 imperfectMatch:(BOOL)arg3 fallback:(BOOL)arg4 ;
-(id)maAssetQueryDescription;
-(BOOL)imperfectMatch;
-(id)description;
-(BOOL)fallback;
-(unsigned long long)hash;
-(BOOL)installedOnly;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)queryType;
@end

