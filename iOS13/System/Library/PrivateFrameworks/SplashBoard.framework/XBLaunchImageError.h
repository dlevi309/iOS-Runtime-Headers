/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <Foundation/NSError.h>

@interface XBLaunchImageError : NSError {

	BOOL _fatal;

}

@property (getter=isFatal,readonly) BOOL fatal;              //@synthesize fatal=_fatal - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isFatal;
-(id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 fatal:(BOOL)arg4 ;
@end

