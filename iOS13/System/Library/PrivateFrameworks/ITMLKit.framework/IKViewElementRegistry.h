/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSMutableDictionary;

@interface IKViewElementRegistry : NSObject {

	NSMutableDictionary* _classMap;
	NSMutableDictionary* _typeMap;
	NSMutableDictionary* _dependentMap;

}
-(id)init;
-(Class)elementClassByTagName:(id)arg1 ;
-(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 ;
-(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(BOOL)arg4 ;
-(BOOL)isDependentByTagName:(id)arg1 ;
-(unsigned long long)elementTypeByTagName:(id)arg1 ;
@end

