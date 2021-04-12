/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@interface NFContainerPoolObject : NSObject {

	unsigned long long _ownership;
	id _strongObject;
	id _weakObject;

}

@property (nonatomic,readonly) unsigned long long ownership;              //@synthesize ownership=_ownership - In the implementation block
@property (nonatomic,readonly) id strongObject;                           //@synthesize strongObject=_strongObject - In the implementation block
@property (nonatomic,__weak,readonly) id weakObject;                      //@synthesize weakObject=_weakObject - In the implementation block
@property (nonatomic,readonly) id object; 
-(id)initWithObject:(id)arg1 ownership:(unsigned long long)arg2 ;
-(id)object;
-(id)weakObject;
-(unsigned long long)ownership;
-(id)strongObject;
@end

