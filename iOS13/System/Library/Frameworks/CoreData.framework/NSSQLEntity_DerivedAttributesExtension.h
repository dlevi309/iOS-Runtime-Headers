/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)entity;
-(id)initWithEntity:(id)arg1 ;
-(id)migrationSQL;
-(void)addDerivationKeypath:(id)arg1 forAttribute:(id)arg2 ;
-(id)derivedAttributes;
-(id)triggerSQL;
-(void)_generateTriggerSQL;
@end

