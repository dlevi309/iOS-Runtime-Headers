/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
*/


@class NSString;

@interface APSMultiUserFS : NSObject {

	NSString* _systemPathCache;
	BOOL _isMultiUser;

}

@property (readonly) BOOL isMultiUser;              //@synthesize isMultiUser=_isMultiUser - In the implementation block
+(id)sharedInstance;
-(id)systemPath;
-(BOOL)isMultiUser;
-(id)initWithIsMultiUserMode:(BOOL)arg1 ;
@end

