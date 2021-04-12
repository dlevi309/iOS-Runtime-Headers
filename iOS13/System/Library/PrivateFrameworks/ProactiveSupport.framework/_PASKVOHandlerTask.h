/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSObject *)object;
-(void)setObject:(NSObject *)arg1 ;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)afterBlock;
-(void)setAfterBlock:(id)arg1 ;
-(id)beforeAndAfterBlock;
-(void)setBeforeAndAfterBlock:(id)arg1 ;
@end

