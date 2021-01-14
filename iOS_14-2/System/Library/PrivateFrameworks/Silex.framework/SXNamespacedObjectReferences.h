/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary;

@interface SXNamespacedObjectReferences : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _componentStyleReferences;
	NSMutableDictionary* _componentTextStyleReferences;
	NSMutableDictionary* _textStyleReferences;

}
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)referencesForComponent:(id)arg1 map:(id)arg2 ;
-(id)namespacedComponentStyleIdentifierForIdentifier:(id)arg1 component:(id)arg2 ;
-(id)namespacedComponentTextStyleIdentifierForIdentifier:(id)arg1 component:(id)arg2 ;
-(id)namespacedTextStyleIdentifierForIdentifier:(id)arg1 component:(id)arg2 ;
-(void)populateWithSource:(id)arg1 ;
-(id)namespacedComponentStyleIdentifiersForIdentifiers:(id)arg1 component:(id)arg2 ;
-(id)componentStyleIdentifierForNamespacedComponentStyleIdentifier:(id)arg1 component:(id)arg2 ;
-(id)namespacedComponentTextStyleIdentifiersForIdentifiers:(id)arg1 component:(id)arg2 ;
-(id)componentTextStyleIdentifierForNamespacedComponentTextStyleIdentifier:(id)arg1 component:(id)arg2 ;
-(id)namespacedTextStyleIdentifiersForIdentifiers:(id)arg1 component:(id)arg2 ;
-(id)textStyleIdentifierForNamespacedTextStyleIdentifier:(id)arg1 component:(id)arg2 ;
@end

