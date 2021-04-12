/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


@class CADisplayMode, NSString;

@interface CADisplayProperties : NSObject {

	CADisplayMode* _currentMode;
	NSString* _overscanAdjustment;
	unsigned _connectionSeed;

}

@property (nonatomic,retain) CADisplayMode * currentMode; 
@property (nonatomic,copy) NSString * overscanAdjustment; 
@property (assign,nonatomic) unsigned connectionSeed; 
-(void)setCurrentMode:(CADisplayMode *)arg1 ;
-(CADisplayMode *)currentMode;
-(NSString *)overscanAdjustment;
-(unsigned)connectionSeed;
-(void)setConnectionSeed:(unsigned)arg1 ;
-(void)setOverscanAdjustment:(NSString *)arg1 ;
-(void)dealloc;
@end

