/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

@class _SFKeySpecifier;


@protocol SFSigningOperation <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy,readonly) _SFKeySpecifier * signingKeySpecifier; 
@required
-(id)sign:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
-(id)verify:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
-(_SFKeySpecifier *)signingKeySpecifier;

@end

