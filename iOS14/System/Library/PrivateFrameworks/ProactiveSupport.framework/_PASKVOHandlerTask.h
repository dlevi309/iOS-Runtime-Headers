/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class NSString, NSObject;

@interface _PASKVOHandlerTask : NSObject {

	NSString* _keyPath;
	NSObject* _object;
	/*^block*/id _afterBlock;
	/*^block*/id _beforeAndAfterBlock;

}

@property (nonatomic,copy) NSString * keyPath;                      //@synthesize keyPath=_keyPath - In the implementation block
@property (assign,nonatomic,__weak) NSObject * object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) id afterBlock;                           //@synthesize afterBlock=_afterBlock - In the implementation block
@property (nonatomic,copy) id beforeAndAfterBlock;                  //@synthesize beforeAndAfterBlock=_beforeAndAfterBlock - In the implementation block
-(id)afterBlock;
-(NSObject *)object;
-(void)setObject:(NSObject *)arg1 ;
-(void)setBeforeAndAfterBlock:(id)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setAfterBlock:(id)arg1 ;
-(NSString *)keyPath;
-(id)beforeAndAfterBlock;
@end

