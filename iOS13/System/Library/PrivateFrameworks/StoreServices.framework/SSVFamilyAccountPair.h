/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDownloaderAccountIdentifier:(unsigned long long)arg1 purchaserAccountIdentifier:(unsigned long long)arg2 familyIdentifier:(unsigned long long)arg3 ;
-(unsigned long long)downloaderAccountIdentifier;
-(unsigned long long)familyIdentifier;
-(unsigned long long)purchaserAccountIdentifier;
@end

