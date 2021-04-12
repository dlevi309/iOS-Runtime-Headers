/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@class NSString, NSMutableDictionary, NSMutableArray, NSBundle;

@interface SCROMobileBrailleDisplayInputManagerCacheObject : NSObject {

	NSString* _driverIdentifier;
	NSString* _modelIdentifier;
	int _brailleInputMode;
	NSMutableDictionary* _commandDictionary;
	NSMutableArray* _orderedIdentifiers;
	NSBundle* _bundle;

}

@property (nonatomic,retain) NSString * modelIdentifier;                           //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (assign,nonatomic) int brailleInputMode;                                 //@synthesize brailleInputMode=_brailleInputMode - In the implementation block
@property (nonatomic,retain) NSString * driverIdentifier;                          //@synthesize driverIdentifier=_driverIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commandDictionary;              //@synthesize commandDictionary=_commandDictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedIdentifiers;                  //@synthesize orderedIdentifiers=_orderedIdentifiers - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                                    //@synthesize bundle=_bundle - In the implementation block
-(NSBundle *)bundle;
-(NSString *)modelIdentifier;
-(void)setBundle:(NSBundle *)arg1 ;
-(void)setModelIdentifier:(NSString *)arg1 ;
-(NSMutableArray *)orderedIdentifiers;
-(int)brailleInputMode;
-(NSString *)driverIdentifier;
-(void)setBrailleInputMode:(int)arg1 ;
-(void)setDriverIdentifier:(NSString *)arg1 ;
-(NSMutableDictionary *)commandDictionary;
-(void)setCommandDictionary:(NSMutableDictionary *)arg1 ;
-(void)setOrderedIdentifiers:(NSMutableArray *)arg1 ;
@end

