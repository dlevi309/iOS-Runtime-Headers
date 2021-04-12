/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueProperty.h>

@class NSArray;

@interface NSKeyValueUnnestedProperty : NSKeyValueProperty {

	NSArray* _affectingProperties;
	BOOL _cachedIsaForAutonotifyingIsValid;
	Class _cachedIsaForAutonotifying;

}
-(BOOL)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(SCD_Struct_NS37*)arg5 ;
-(id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1 ;
-(void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(BOOL)arg3 ;
-(BOOL)matchesWithoutOperatorComponentsKeyPath:(id)arg1 ;
-(void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(BOOL)arg3 ;
-(void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(SCD_Struct_NS37)arg5 ;
-(id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(BOOL*)arg2 ;
-(Class)_isaForAutonotifying;
-(Class)isaForAutonotifying;
-(id)description;
-(id)_initWithContainerClass:(id)arg1 key:(id)arg2 propertiesBeingInitialized:(CFSetRef)arg3 ;
-(void)_givenPropertiesBeingInitialized:(CFSetRef)arg1 getAffectingProperties:(id)arg2 ;
-(id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1 ;
-(id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(BOOL*)arg2 ;
-(void)_addDependentValueKey:(id)arg1 ;
-(void)dealloc;
@end

