/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
*/


@class NSString;

@interface PKMediaName : NSObject {

	NSString* _mediaName;
	NSString* _mediaClass;
	NSString* _baseName;
	double _widthInUnits;
	double _heightInUnits;
	NSString* _widthStr;
	long long _units;
	double _conversionFactor;

}

@property (retain) NSString * mediaName;                     //@synthesize mediaName=_mediaName - In the implementation block
@property (retain) NSString * mediaClass;                    //@synthesize mediaClass=_mediaClass - In the implementation block
@property (retain) NSString * baseName;                      //@synthesize baseName=_baseName - In the implementation block
@property (retain) NSString * widthStr;                      //@synthesize widthStr=_widthStr - In the implementation block
@property (assign) double widthInUnits;                      //@synthesize widthInUnits=_widthInUnits - In the implementation block
@property (assign) double heightInUnits;                     //@synthesize heightInUnits=_heightInUnits - In the implementation block
@property (assign) long long units;                          //@synthesize units=_units - In the implementation block
@property (assign) double conversionFactor;                  //@synthesize conversionFactor=_conversionFactor - In the implementation block
@property (readonly) BOOL isRoll; 
@property (readonly) double width; 
@property (readonly) double height; 
@property (retain,readonly) NSString * unitStr; 
+(id)pkMediaNameWithString:(id)arg1 ;
-(long long)units;
-(void)setUnits:(long long)arg1 ;
-(id)initWithString:(id)arg1 ;
-(BOOL)isRoll;
-(double)width;
-(double)height;
-(NSString *)baseName;
-(NSString *)mediaName;
-(NSString *)unitStr;
-(void)dealloc;
-(void)setMediaName:(NSString *)arg1 ;
-(void)parseMediaName:(id)arg1 ;
-(void)setMediaClass:(NSString *)arg1 ;
-(void)setBaseName:(NSString *)arg1 ;
-(void)setWidthStr:(NSString *)arg1 ;
-(void)setConversionFactor:(double)arg1 ;
-(void)setWidthInUnits:(double)arg1 ;
-(void)setHeightInUnits:(double)arg1 ;
-(NSString *)mediaClass;
-(double)widthInUnits;
-(double)conversionFactor;
-(double)heightInUnits;
-(NSString *)widthStr;
@end

