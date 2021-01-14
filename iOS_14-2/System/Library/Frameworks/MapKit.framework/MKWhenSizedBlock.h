/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@interface MKWhenSizedBlock : NSObject {

	BOOL _shouldRun;
	long long _type;
	/*^block*/id _block;
	/*^block*/id _completion;

}

@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id block;                      //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) id completion;                 //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) BOOL shouldRun;              //@synthesize shouldRun=_shouldRun - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)completion;
-(void)setType:(long long)arg1 ;
-(void)perform;
-(long long)type;
-(BOOL)shouldRun;
-(id)initWithType:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)setShouldRun:(BOOL)arg1 ;
-(id)initWithType:(long long)arg1 block:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

