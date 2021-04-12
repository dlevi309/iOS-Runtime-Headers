/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@interface NRRegistryQueryCompletionBlockEntry : NSObject {

	/*^block*/id _block;
	unsigned long long _updateCounter;

}

@property (nonatomic,copy) id block;                                        //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) unsigned long long updateCounter;              //@synthesize updateCounter=_updateCounter - In the implementation block
-(id)block;
-(void)setBlock:(id)arg1 ;
-(unsigned long long)updateCounter;
-(void)setUpdateCounter:(unsigned long long)arg1 ;
-(id)initWithUpdateCounter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
@end

