/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)object;
-(id)weakObject;
-(id)strongObject;
-(id)initWithObject:(id)arg1 ownership:(unsigned long long)arg2 ;
-(unsigned long long)ownership;
@end

