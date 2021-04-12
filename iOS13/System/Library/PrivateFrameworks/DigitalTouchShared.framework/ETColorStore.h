/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/


@class NSMutableArray, NSArray;

@interface ETColorStore : NSObject {

	NSMutableArray* _colors;
	unsigned long long _selectedColorIndex;
	BOOL _selectedIndexLoaded;

}

@property (assign,nonatomic) unsigned long long selectedColorIndex; 
@property (nonatomic,readonly) NSArray * colors; 
+(id)defaultStore;
-(id)init;
-(void)dealloc;
-(id)_colors;
-(NSArray *)colors;
-(unsigned long long)selectedColorIndex;
-(void)setSelectedColorIndex:(unsigned long long)arg1 ;
-(void)defaultsChanged:(id)arg1 ;
-(void)saveColor:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)addDefaultsObserver;
@end

