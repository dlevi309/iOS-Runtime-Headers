/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

@class _SFKeySpecifier;


@protocol SFSigningOperation <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy,readonly) _SFKeySpecifier * signingKeySpecifier; 
@required
-(id)verify:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
-(id)sign:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
-(_SFKeySpecifier *)signingKeySpecifier;

@end

