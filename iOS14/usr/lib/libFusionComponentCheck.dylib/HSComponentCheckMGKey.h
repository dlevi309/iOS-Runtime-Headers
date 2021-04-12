/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libFusionComponentCheck.dylib
*/


@class NSString, NSArray;

@interface HSComponentCheckMGKey : NSObject {

	NSString* _key;
	NSArray* _keys;
	/*^block*/id _transform;

}

@property (retain) NSString * key;                    //@synthesize key=_key - In the implementation block
@property (retain) NSArray * keys;                    //@synthesize keys=_keys - In the implementation block
@property (nonatomic,copy) id transform;              //@synthesize transform=_transform - In the implementation block
+(id)key:(id)arg1 ;
+(id)key:(id)arg1 transform:(/*^block*/id)arg2 ;
+(id)keys:(id)arg1 transform:(/*^block*/id)arg2 ;
-(NSArray *)keys;
-(void)setKeys:(NSArray *)arg1 ;
-(void)setTransform:(id)arg1 ;
-(id)transform;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
@end

