/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSString;

@interface CADisplayMode : NSObject {

	CADisplayModePriv* _priv;

}

@property (nonatomic,readonly) unsigned long long width; 
@property (nonatomic,readonly) unsigned long long height; 
@property (nonatomic,readonly) double pixelAspectRatio; 
@property (nonatomic,readonly) double refreshRate; 
@property (nonatomic,readonly) BOOL isVirtual; 
@property (getter=isHighBandwidth,nonatomic,readonly) BOOL highBandwidth; 
@property (nonatomic,copy,readonly) NSString * colorMode; 
@property (nonatomic,readonly) unsigned long long preferredScale; 
@property (nonatomic,copy,readonly) NSString * hdrMode; 
@property (nonatomic,copy,readonly) NSString * colorGamut; 
@property (nonatomic,readonly) unsigned long long internalRepresentation; 
+(id)_displayModeWithMode:(Mode)arg1 display:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)internalRepresentation;
-(Mode)_mode;
-(NSString *)hdrMode;
-(NSString *)colorGamut;
-(double)refreshRate;
-(id)_display;
-(double)pixelAspectRatio;
-(unsigned long long)preferredScale;
-(BOOL)isVirtual;
-(NSString *)colorMode;
-(void)_setPreferredUIScale:(unsigned)arg1 ;
-(void)_setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)_initWithMode:(Mode)arg1 display:(id)arg2 ;
-(BOOL)isHighBandwidth;
@end

