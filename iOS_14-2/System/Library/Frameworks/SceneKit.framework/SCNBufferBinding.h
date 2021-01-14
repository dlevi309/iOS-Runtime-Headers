/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@class NSString;

@interface SCNBufferBinding : NSObject {

	NSString* _name;
	long long _frequency;
	/*^block*/id _block;

}

@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id block;                           //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) long long frequency;              //@synthesize frequency=_frequency - In the implementation block
-(void)setFrequency:(long long)arg1 ;
-(long long)frequency;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
@end

