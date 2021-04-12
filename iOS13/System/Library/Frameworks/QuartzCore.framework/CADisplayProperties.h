/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(CADisplayMode *)currentMode;
-(void)setCurrentMode:(CADisplayMode *)arg1 ;
-(unsigned)connectionSeed;
-(NSString *)overscanAdjustment;
-(void)setOverscanAdjustment:(NSString *)arg1 ;
-(void)setConnectionSeed:(unsigned)arg1 ;
@end

