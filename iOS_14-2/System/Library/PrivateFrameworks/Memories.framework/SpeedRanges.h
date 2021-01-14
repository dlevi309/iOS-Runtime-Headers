/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SpeedRangeDelegate;
@class NSObject, NSMutableArray;

@interface SpeedRanges : NSObject <NSFastEnumeration, NSCopying> {

	int _editCount;
	int _mediaDuration;
	NSObject*<SpeedRangeDelegate> _delegate;
	SpeedRanges* _ramped;
	NSMutableArray* _array;
	SpeedRanges* _old;

}

@property (nonatomic,retain) SpeedRanges * ramped;                                       //@synthesize ramped=_ramped - In the implementation block
@property (nonatomic,retain) NSMutableArray * array;                                     //@synthesize array=_array - In the implementation block
@property (nonatomic,retain) SpeedRanges * old;                                          //@synthesize old=_old - In the implementation block
@property (assign) int editCount;                                                        //@synthesize editCount=_editCount - In the implementation block
@property (assign,nonatomic) int mediaDuration;                                          //@synthesize mediaDuration=_mediaDuration - In the implementation block
@property (nonatomic,readonly) BOOL isEdited; 
@property (assign,nonatomic,__weak) NSObject*<SpeedRangeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)objectFromPlist:(id)arg1 ;
+(void)rangesFromSloMoAsset:(id)arg1 userAdjustedOnly:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(SpeedRanges *)old;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_Sp29*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)initWithDuration:(int)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(NSObject*<SpeedRangeDelegate>)delegate;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(NSMutableArray *)array;
-(unsigned long long)count;
-(int)mediaDuration;
-(id)lastObject;
-(id)firstObject;
-(BOOL)containsObject:(id)arg1 ;
-(void)setDelegate:(NSObject*<SpeedRangeDelegate>)arg1 ;
-(id)description;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)setMediaDuration:(int)arg1 ;
-(SpeedRanges *)ramped;
-(void)removeObject:(id)arg1 ;
-(id)plistRepresentation;
-(BOOL)isEdited;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(void)setArray:(NSMutableArray *)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setOld:(SpeedRanges *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(int)mediaTimeForClipTime:(int)arg1 ;
-(int)clipTimeForMediaTime:(int)arg1 ;
-(void)willChange;
-(void)didChange;
-(float)mediaTimeFloatForClipTime:(int)arg1 ;
-(void)removeShortRanges;
-(void)updateLinks;
-(id)speedRangeAtClipTime:(int)arg1 ;
-(int)editCount;
-(void)setEditCount:(int)arg1 ;
-(void)setRamped:(SpeedRanges *)arg1 ;
-(void)_removeBackToBackFreezes;
-(id)generateRamps;
-(void)testRamps;
-(void)testUberRamp;
-(id)setFromAdjustmentData:(id)arg1 ;
-(int)mapClipTime:(int)arg1 fromMap:(id)arg2 ;
@end

