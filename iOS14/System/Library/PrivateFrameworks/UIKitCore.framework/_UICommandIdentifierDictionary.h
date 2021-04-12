/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UISelectorDictionary, NSMutableDictionary;

@interface _UICommandIdentifierDictionary : NSObject <NSCopying> {

	_UISelectorDictionary* _actionDictionary;
	NSMutableDictionary* _actionPropertyListDictionary;

}
-(void)removeEntriesFromDictionary:(id)arg1 ;
-(id)init;
-(void)removeObjectForAction:(SEL)arg1 propertyList:(id)arg2 ;
-(id)intersectingIdentifiersFromDictionary:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)intersectsEntriesFromDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)objectForAction:(SEL)arg1 propertyList:(id)arg2 ;
-(void)setObject:(id)arg1 forAction:(SEL)arg2 propertyList:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

