/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSMutableDictionary;

@interface IKViewElementRegistry : NSObject {

	NSMutableDictionary* _classMap;
	NSMutableDictionary* _typeMap;
	NSMutableDictionary* _dependentMap;

}
-(id)init;
-(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 ;
-(Class)elementClassByTagName:(id)arg1 ;
-(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(BOOL)arg4 ;
-(BOOL)isDependentByTagName:(id)arg1 ;
-(unsigned long long)elementTypeByTagName:(id)arg1 ;
@end

