/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMSetting.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSSet;

@interface HMCollectionSetting : HMSetting <NSFastEnumeration> {

	NSSet* _itemValueClasses;

}

@property (copy,readonly) NSSet * itemValueClasses;              //@synthesize itemValueClasses=_itemValueClasses - In the implementation block
+(id)defaultItemValueClasses;
+(id)itemValueClassesForKeyPath:(id)arg1 ;
+(void)setItemValueClass:(Class)arg1 forKeyPath:(id)arg2 ;
+(void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_HM2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)setItemValueClass:(Class)arg1 ;
-(void)setItemValueClasses:(NSSet *)arg1 ;
-(NSSet *)itemValueClasses;
@end

