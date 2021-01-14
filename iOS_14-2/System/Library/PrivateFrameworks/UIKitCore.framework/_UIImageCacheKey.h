/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImageConfiguration, NSBundle;

@interface _UIImageCacheKey : NSObject <NSCopying> {

	NSString* _name;
	UIImageConfiguration* _configuration;
	NSBundle* _bundle;
	SCD_Struct_UI36 _flags;

}
+(id)keyWithName:(id)arg1 configuration:(id)arg2 bundle:(id)arg3 ;
+(id)keyWithName:(id)arg1 configuration:(id)arg2 ;
+(id)keyWithSystemName:(id)arg1 private:(BOOL)arg2 configuration:(id)arg3 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

