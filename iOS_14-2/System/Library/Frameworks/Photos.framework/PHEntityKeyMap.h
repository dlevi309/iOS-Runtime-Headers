/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSDictionary;

@interface PHEntityKeyMap : NSObject {

	NSDictionary* _propertyKeysByEntityKey;
	NSDictionary* _entityKeysByPropertyKey;

}
+(id)transposePropertyKeysByEntityKey:(id)arg1 ;
+(void)assertPropertyKey:(id)arg1 doesNotExistForEntityKey:(id)arg2 inEntityKeysByProperty:(id)arg3 ;
-(id)propertyKeyForEntityKey:(id)arg1 ;
-(id)initWithPropertyKeysByEntityKey:(id)arg1 ;
-(id)entityKeyForPropertyKey:(id)arg1 ;
@end

