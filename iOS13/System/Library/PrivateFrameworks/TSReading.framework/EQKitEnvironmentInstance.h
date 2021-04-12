/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitEnvironment.h>

@class NSDictionary;

@interface EQKitEnvironmentInstance : EQKitEnvironment {

	NSDictionary* mConfig;
	Dictionary* mOperatorDictionary;
	Manager* mFontManager;
	Manager* mKerningManager;
	Config* mLayoutConfig;

}

@property (assign,nonatomic) BOOL kerning; 
+(id)defaultEnvironment;
+(id)environmentFromData:(id)arg1 ;
+(id)dataForEnvironment:(id)arg1 ;
-(void)dealloc;
-(BOOL)kerning;
-(void)setKerning:(BOOL)arg1 ;
-(void)endLayout;
-(id)initWithConfig:(id)arg1 ;
-(const Manager*)fontManager;
-(void)beginLayout;
-(const Manager*)kerningManager;
-(const Config*)layoutConfig;
-(const Dictionary*)operatorDictionary;
-(id)newDictionaryForArchiving;
@end

