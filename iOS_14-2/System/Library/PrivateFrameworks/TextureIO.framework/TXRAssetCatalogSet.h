/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/


@class NSString, NSMutableArray, NSArray;

@interface TXRAssetCatalogSet : NSObject {

	unsigned long long _interpretation;
	unsigned long long _origin;
	NSString* _name;
	BOOL _cubemap;
	NSMutableArray* _configs;

}

@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long interpretation;              //@synthesize interpretation=_interpretation - In the implementation block
@property (assign,nonatomic) unsigned long long origin;                      //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) BOOL cubemap;                                 //@synthesize cubemap=_cubemap - In the implementation block
@property (readonly) NSArray * configs;                                      //@synthesize configs=_configs - In the implementation block
-(void)setOrigin:(unsigned long long)arg1 ;
-(unsigned long long)origin;
-(id)init;
-(BOOL)cubemap;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(unsigned long long)interpretation;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)configs;
-(id)exportAtLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)addConfig:(id)arg1 error:(id*)arg2 ;
-(void)setInterpretation:(unsigned long long)arg1 ;
@end

