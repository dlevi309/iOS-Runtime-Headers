/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SBSApplicationShortcutIcon;

@interface UIApplicationShortcutIcon : NSObject <NSCopying> {

	SBSApplicationShortcutIcon* _sbsShortcutIcon;

}

@property (nonatomic,readonly) SBSApplicationShortcutIcon * sbsShortcutIcon;              //@synthesize sbsShortcutIcon=_sbsShortcutIcon - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)iconWithCustomImage:(id)arg1 isTemplate:(BOOL)arg2 ;
+(id)iconWithType:(long long)arg1 ;
+(id)iconWithSystemImageName:(id)arg1 ;
+(id)iconWithCustomImage:(id)arg1 ;
+(id)iconWithTemplateImageName:(id)arg1 ;
-(SBSApplicationShortcutIcon *)sbsShortcutIcon;
-(id)initWithSBSApplicationShortcutIcon:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

