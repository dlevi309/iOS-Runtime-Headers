/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSKeyValueProxyGetter.h>

@class NSKeyValueNonmutatingCollectionMethodSet, NSKeyValueMutatingCollectionMethodSet;

@interface NSKeyValueFastMutableCollection1Getter : NSKeyValueProxyGetter {

	NSKeyValueNonmutatingCollectionMethodSet* _nonmutatingMethods;
	NSKeyValueMutatingCollectionMethodSet* _mutatingMethods;

}
-(id)initWithContainerClassID:(id)arg1 key:(id)arg2 nonmutatingMethods:(id)arg3 mutatingMethods:(id)arg4 proxyClass:(Class)arg5 ;
-(id)mutatingMethods;
-(id)nonmutatingMethods;
-(void)dealloc;
@end

