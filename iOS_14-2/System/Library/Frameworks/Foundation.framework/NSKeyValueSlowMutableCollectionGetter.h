/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSKeyValueProxyGetter.h>

@class NSKeyValueGetter, NSKeyValueSetter;

@interface NSKeyValueSlowMutableCollectionGetter : NSKeyValueProxyGetter {

	NSKeyValueGetter* _baseGetter;
	NSKeyValueSetter* _baseSetter;

}
-(BOOL)treatNilValuesLikeEmptyCollections;
-(id)initWithContainerClassID:(id)arg1 key:(id)arg2 baseGetter:(id)arg3 baseSetter:(id)arg4 containerIsa:(Class)arg5 proxyClass:(Class)arg6 ;
-(id)baseSetter;
-(void)dealloc;
-(id)baseGetter;
@end

