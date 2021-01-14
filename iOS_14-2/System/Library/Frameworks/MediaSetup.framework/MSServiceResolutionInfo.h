/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MSServiceAppInfo, MSUserAccountInfo;

@interface MSServiceResolutionInfo : NSObject <NSSecureCoding> {

	MSServiceAppInfo* _serviceAppInfo;
	MSUserAccountInfo* _userAccountInfo;

}

@property (nonatomic,readonly) MSServiceAppInfo * serviceAppInfo;                //@synthesize serviceAppInfo=_serviceAppInfo - In the implementation block
@property (nonatomic,readonly) MSUserAccountInfo * userAccountInfo;              //@synthesize userAccountInfo=_userAccountInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithServiceAppInfo:(id)arg1 userAccountInfo:(id)arg2 ;
-(MSServiceAppInfo *)serviceAppInfo;
-(MSUserAccountInfo *)userAccountInfo;
@end

