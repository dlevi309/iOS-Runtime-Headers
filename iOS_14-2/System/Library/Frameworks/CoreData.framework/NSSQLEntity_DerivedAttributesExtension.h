/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLEntity, NSMutableArray, NSMutableDictionary;

@interface NSSQLEntity_DerivedAttributesExtension : NSObject {

	NSSQLEntity* _entity;
	CFDictionaryRef _derivedAttributes;
	NSMutableArray* _triggerSQL;
	NSMutableDictionary* _migrationSQL;

}
-(id)initWithEntity:(id)arg1 ;
-(id)entity;
-(id)triggerSQL;
-(void)addDerivationKeypath:(id)arg1 forAttribute:(id)arg2 ;
-(void)_generateTriggerSQL;
-(id)migrationSQL;
-(id)derivedAttributes;
-(void)dealloc;
@end

