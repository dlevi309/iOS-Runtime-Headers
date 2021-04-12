/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImageConfiguration, NSBundle;

@interface _UIImageCacheKey : NSObject <NSCopying> {

	NSString* _name;
	UIImageConfiguration* _configuration;
	NSBundle* _bundle;
	SCD_Struct_UI31 _flags;

}
+(id)keyWithName:(id)arg1 configuration:(id)arg2 bundle:(id)arg3 ;
+(id)keyWithName:(id)arg1 configuration:(id)arg2 ;
+(id)keyWithSystemName:(id)arg1 private:(BOOL)arg2 configuration:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

