/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <Foundation/NSError.h>

@interface XBLaunchImageError : NSError {

	BOOL _fatal;
	BOOL _shouldDeny;

}

@property (getter=isFatal,readonly) BOOL fatal;              //@synthesize fatal=_fatal - In the implementation block
@property (readonly) BOOL shouldDeny;                        //@synthesize shouldDeny=_shouldDeny - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isFatal;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCode:(long long)arg1 bundleID:(id)arg2 reason:(id)arg3 fatal:(BOOL)arg4 ;
-(BOOL)shouldDeny;
@end

