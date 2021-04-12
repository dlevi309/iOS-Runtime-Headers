/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)iconWithSystemImageName:(id)arg1 ;
+(id)iconWithCustomImage:(id)arg1 isTemplate:(BOOL)arg2 ;
+(id)iconWithTemplateImageName:(id)arg1 ;
+(id)iconWithType:(long long)arg1 ;
+(id)iconWithCustomImage:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSBSApplicationShortcutIcon:(id)arg1 ;
-(SBSApplicationShortcutIcon *)sbsShortcutIcon;
@end

