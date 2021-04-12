/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@interface SSVFamilyAccountPair : NSObject {

	unsigned long long _downloaderAccountIdentifier;
	unsigned long long _familyIdentifier;
	unsigned long long _purchaserAccountIdentifier;

}

@property (nonatomic,readonly) unsigned long long downloaderAccountIdentifier;              //@synthesize downloaderAccountIdentifier=_downloaderAccountIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long familyIdentifier;                         //@synthesize familyIdentifier=_familyIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long purchaserAccountIdentifier;               //@synthesize purchaserAccountIdentifier=_purchaserAccountIdentifier - In the implementation block
-(unsigned long long)downloaderAccountIdentifier;
-(id)initWithDownloaderAccountIdentifier:(unsigned long long)arg1 purchaserAccountIdentifier:(unsigned long long)arg2 familyIdentifier:(unsigned long long)arg3 ;
-(unsigned long long)purchaserAccountIdentifier;
-(unsigned long long)familyIdentifier;
@end

