/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSKeyValueContainerClass, NSString;

@interface NSKeyValueProperty : NSObject <NSCopying> {

	NSKeyValueContainerClass* _containerClass;
	NSString* _keyPath;

}
-(BOOL)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(SCD_Struct_NS37*)arg5 ;
-(id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1 ;
-(void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(BOOL)arg3 ;
-(BOOL)matchesWithoutOperatorComponentsKeyPath:(id)arg1 ;
-(void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(BOOL)arg3 ;
-(void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(SCD_Struct_NS37)arg5 ;
-(id)dependentValueKeyOrKeysIsASet:(BOOL*)arg1 ;
-(id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(BOOL*)arg2 ;
-(id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(CFSetRef)arg3 ;
-(Class)isaForAutonotifying;
-(id)restOfKeyPathIfContainedByValueForKeyPath:(id)arg1 ;
-(id)keyPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

