/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


@class NSString, ETModelDef;

@interface ETVariable : NSObject {

	float _initializationAlpha;
	float _initializationBeta;
	unsigned long long _kind;
	NSString* _name;
	NSString* _layerName;
	unsigned long long _initializationMode;
	ETModelDef* _model;

}

@property (assign,nonatomic,__weak) ETModelDef * model;                //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) unsigned long long kind;                  //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * layerName;                     //@synthesize layerName=_layerName - In the implementation block
@property (assign) unsigned long long initializationMode;              //@synthesize initializationMode=_initializationMode - In the implementation block
@property (assign) float initializationAlpha;                          //@synthesize initializationAlpha=_initializationAlpha - In the implementation block
@property (assign) float initializationBeta;                           //@synthesize initializationBeta=_initializationBeta - In the implementation block
-(ETModelDef *)model;
-(NSString *)layerName;
-(void)updateWithData:(id)arg1 ;
-(unsigned long long)kind;
-(void)setLayerName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setModel:(ETModelDef *)arg1 ;
-(void)setKind:(unsigned long long)arg1 ;
-(id)initWithModelDef:(id)arg1 ;
-(void)setInitializationMode:(unsigned long long)arg1 ;
-(id)copyData;
-(id)getOpaqueCopy;
-(id)swapWithOpaqueCopy:(id)arg1 ;
-(unsigned long long)initializationMode;
-(float)initializationAlpha;
-(void)setInitializationAlpha:(float)arg1 ;
-(float)initializationBeta;
-(void)setInitializationBeta:(float)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

