/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSSet;

@interface HFDictionaryCombinator : NSObject {

	NSSet* _keysToReconcile;
	NSSet* _keysToSkip;

}

@property (nonatomic,copy) NSSet * keysToReconcile;              //@synthesize keysToReconcile=_keysToReconcile - In the implementation block
@property (nonatomic,copy) NSSet * keysToSkip;                   //@synthesize keysToSkip=_keysToSkip - In the implementation block
+(BOOL)_isKindOfContainerClass:(id)arg1 ;
-(void)setKeysToSkip:(NSSet *)arg1 ;
-(id)combineResultDictionary:(id)arg1 withResultDictionary:(id)arg2 reconcilationHandler:(/*^block*/id)arg3 ;
-(NSSet *)keysToSkip;
-(NSSet *)keysToReconcile;
-(void)_reconcileKey:(id)arg1 fromDictionary:(id)arg2 andDictionary:(id)arg3 intoResultDictionary:(id)arg4 withReconcilationHandler:(/*^block*/id)arg5 ;
-(id)_mergeVal1:(id)arg1 withVal2:(id)arg2 ;
-(void)setKeysToReconcile:(NSSet *)arg1 ;
@end

