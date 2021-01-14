/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@interface AMSFamilyAccountPair : NSObject {

	unsigned long long _downloaderAccountID;
	unsigned long long _familyID;
	unsigned long long _purchaserAccountID;

}

@property (nonatomic,readonly) unsigned long long downloaderAccountID;              //@synthesize downloaderAccountID=_downloaderAccountID - In the implementation block
@property (nonatomic,readonly) unsigned long long familyID;                         //@synthesize familyID=_familyID - In the implementation block
@property (nonatomic,readonly) unsigned long long purchaserAccountID;               //@synthesize purchaserAccountID=_purchaserAccountID - In the implementation block
-(unsigned long long)downloaderAccountID;
-(unsigned long long)purchaserAccountID;
-(id)initWithDownloaderAccountID:(unsigned long long)arg1 purchaserAccountID:(unsigned long long)arg2 familyID:(unsigned long long)arg3 ;
-(unsigned long long)familyID;
@end

