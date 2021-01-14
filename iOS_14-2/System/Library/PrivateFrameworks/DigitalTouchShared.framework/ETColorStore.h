/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)colors;
-(id)init;
-(id)_colors;
-(void)defaultsChanged:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)selectedColorIndex;
-(void)setSelectedColorIndex:(unsigned long long)arg1 ;
-(void)saveColor:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)addDefaultsObserver;
@end

