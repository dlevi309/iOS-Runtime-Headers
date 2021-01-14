/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_HM6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)setItemValueClass:(Class)arg1 ;
-(void)setItemValueClasses:(NSSet *)arg1 ;
-(NSSet *)itemValueClasses;
@end

