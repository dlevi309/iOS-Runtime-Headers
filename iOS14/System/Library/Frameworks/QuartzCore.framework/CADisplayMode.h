/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL colorModeIsYCbCr; 
@property (nonatomic,readonly) unsigned long long preferredScale; 
@property (nonatomic,copy,readonly) NSString * hdrMode; 
@property (nonatomic,copy,readonly) NSString * colorGamut; 
@property (nonatomic,readonly) unsigned long long bitDepth; 
@property (nonatomic,readonly) unsigned long long internalRepresentation; 
+(id)_displayModeWithMode:(Mode)arg1 display:(id)arg2 ;
-(Mode)_mode;
-(NSString *)colorMode;
-(unsigned long long)width;
-(double)refreshRate;
-(NSString *)hdrMode;
-(NSString *)colorGamut;
-(unsigned long long)bitDepth;
-(id)_display;
-(unsigned long long)height;
-(BOOL)isVirtual;
-(double)pixelAspectRatio;
-(id)description;
-(void)_setPreferredUIScale:(unsigned)arg1 ;
-(unsigned long long)preferredScale;
-(void)_setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(BOOL)isHighBandwidth;
-(id)_initWithMode:(Mode)arg1 display:(id)arg2 ;
-(BOOL)colorModeIsYCbCr;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)internalRepresentation;
-(void)dealloc;
@end

