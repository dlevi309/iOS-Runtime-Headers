/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSDictionary;

@interface PHEntityKeyMap : NSObject {

	NSDictionary* _propertyKeysByEntityKey;
	NSDictionary* _entityKeysByPropertyKey;

}
+(id)transposePropertyKeysByEntityKey:(id)arg1 ;
+(void)assertPropertyKey:(id)arg1 doesNotExistForEntityKey:(id)arg2 inEntityKeysByProperty:(id)arg3 ;
-(id)initWithPropertyKeysByEntityKey:(id)arg1 ;
-(id)entityKeyForPropertyKey:(id)arg1 ;
-(id)propertyKeyForEntityKey:(id)arg1 ;
@end

