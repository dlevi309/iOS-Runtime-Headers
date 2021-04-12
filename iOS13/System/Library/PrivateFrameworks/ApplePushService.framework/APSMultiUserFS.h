/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
*/


@class NSString;

@interface APSMultiUserFS : NSObject {

	NSString* _systemPathCache;
	BOOL _isMultiUser;

}

@property (readonly) BOOL isMultiUser;              //@synthesize isMultiUser=_isMultiUser - In the implementation block
+(id)sharedInstance;
-(BOOL)isMultiUser;
-(id)systemPath;
-(id)initWithIsMultiUserMode:(BOOL)arg1 ;
@end

