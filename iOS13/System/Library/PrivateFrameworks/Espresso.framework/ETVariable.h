/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)kind;
-(void)setKind:(unsigned long long)arg1 ;
-(ETModelDef *)model;
-(void)setModel:(ETModelDef *)arg1 ;
-(void)updateWithData:(id)arg1 ;
-(NSString *)layerName;
-(void)setLayerName:(NSString *)arg1 ;
-(id)copyData;
-(id)initWithModelDef:(id)arg1 ;
-(id)getOpaqueCopy;
-(id)swapWithOpaqueCopy:(id)arg1 ;
-(unsigned long long)initializationMode;
-(void)setInitializationMode:(unsigned long long)arg1 ;
-(float)initializationAlpha;
-(void)setInitializationAlpha:(float)arg1 ;
-(float)initializationBeta;
-(void)setInitializationBeta:(float)arg1 ;
@end

