/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)fallback;
-(MAAssetQuery *)maQuery;
-(BOOL)installedOnly;
-(id)initWithDeviceAssetQuery:(id)arg1 installedOnly:(BOOL)arg2 imperfectMatch:(BOOL)arg3 fallback:(BOOL)arg4 ;
-(id)maAssetQueryDescription;
-(NSString *)queryType;
-(BOOL)imperfectMatch;
@end

