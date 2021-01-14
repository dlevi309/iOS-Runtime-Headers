/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

@class _SFKeySpecifier, NSString;


@protocol _SFKeyAttributes <NSObject,NSCopying>
@property (nonatomic,copy,readonly) _SFKeySpecifier * keySpecifier; 
@property (nonatomic,copy,readonly) NSString * keyDomain; 
@required
+(id)alloc;
-(NSString *)keyDomain;
-(_SFKeySpecifier *)keySpecifier;

@end

