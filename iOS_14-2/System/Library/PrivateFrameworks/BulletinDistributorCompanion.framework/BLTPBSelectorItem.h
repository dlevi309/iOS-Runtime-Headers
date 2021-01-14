/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@interface BLTPBSelectorItem : NSObject {

	SEL _selector;
	/*function pointer*/void* _method;

}

@property (assign,nonatomic) SEL selector;                                  //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* method;              //@synthesize method=_method - In the implementation block
-(SEL)selector;
-(void)setSelector:(SEL)arg1 ;
-(/*function pointer*/void*)method;
-(void)setMethod:(/*function pointer*/void*)arg1 ;
@end

