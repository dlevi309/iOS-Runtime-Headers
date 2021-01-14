/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
*/

#import <DaemonUtils/Request.h>

@interface StorageRequest : Request {

	long long _domain;
	long long _key;

}

@property (nonatomic,readonly) long long domain;              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) long long key;                 //@synthesize key=_key - In the implementation block
-(long long)domain;
-(long long)key;
-(id)initWithStorageDomain:(long long)arg1 key:(long long)arg2 ;
@end

