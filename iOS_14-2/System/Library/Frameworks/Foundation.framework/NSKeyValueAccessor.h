/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSString;

@interface NSKeyValueAccessor : NSObject {

	id _containerClassID;
	NSString* _key;
	unsigned long long _hash;
	/*function pointer*/void* _implementation;
	SEL _selector;
	unsigned long long _extraArgumentCount;
	void* _extraArgument1;
	void* _extraArgument2;
	void* _extraArgument3;

}
-(id)initWithContainerClassID:(id)arg1 key:(id)arg2 implementation:(/*function pointer*/void*)arg3 selector:(SEL)arg4 extraArguments:(void**)arg5 count:(unsigned long long)arg6 ;
-(SEL)selector;
-(void*)extraArgument1;
-(void*)extraArgument2;
-(id)containerClassID;
-(unsigned long long)extraArgumentCount;
-(id)key;
-(void)dealloc;
@end

