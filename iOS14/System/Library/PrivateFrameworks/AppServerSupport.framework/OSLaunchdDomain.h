/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppServerSupport.framework/AppServerSupport
*/


@interface OSLaunchdDomain : NSObject {

	int _type;
	unsigned long long _handle;

}
+(id)domainForPid:(int)arg1 ;
+(id)loginwindowDomain;
+(id)domainForUser:(unsigned)arg1 ;
+(id)currentDomain;
-(id)initWithType:(int)arg1 handle:(unsigned long long)arg2 ;
@end

