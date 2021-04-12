/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(unsigned long long)origin;
-(void)setOrigin:(unsigned long long)arg1 ;
-(BOOL)cubemap;
-(unsigned long long)interpretation;
-(id)exportAtLocation:(id)arg1 error:(id*)arg2 ;
-(NSArray *)configs;
-(BOOL)addConfig:(id)arg1 error:(id*)arg2 ;
-(void)setInterpretation:(unsigned long long)arg1 ;
@end

