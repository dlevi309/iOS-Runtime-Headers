/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UISelectorDictionary, NSMutableDictionary;

@interface _UICommandIdentifierDictionary : NSObject <NSCopying> {

	_UISelectorDictionary* _actionDictionary;
	NSMutableDictionary* _actionPropertyListDictionary;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)objectForAction:(SEL)arg1 propertyList:(id)arg2 ;
-(void)removeEntriesFromDictionary:(id)arg1 ;
-(BOOL)intersectsEntriesFromDictionary:(id)arg1 ;
-(void)setObject:(id)arg1 forAction:(SEL)arg2 propertyList:(id)arg3 ;
-(id)intersectingIdentifiersFromDictionary:(id)arg1 ;
-(void)removeObjectForAction:(SEL)arg1 propertyList:(id)arg2 ;
@end

