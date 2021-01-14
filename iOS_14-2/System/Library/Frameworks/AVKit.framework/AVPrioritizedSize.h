/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


#import <AVKit/AVKit-Structs.h>
@class NSMutableArray;

@interface AVPrioritizedSize : NSObject {

	NSMutableArray* _requiredPrioritySizes;
	NSMutableArray* _veryHighPrioritySizes;
	NSMutableArray* _highPrioritySizes;
	NSMutableArray* _mediumPrioritySizes;
	NSMutableArray* _lowPrioritySizes;
	CGSize _currentTotalSize;

}

@property (nonatomic,retain) NSMutableArray * requiredPrioritySizes;              //@synthesize requiredPrioritySizes=_requiredPrioritySizes - In the implementation block
@property (nonatomic,retain) NSMutableArray * veryHighPrioritySizes;              //@synthesize veryHighPrioritySizes=_veryHighPrioritySizes - In the implementation block
@property (nonatomic,retain) NSMutableArray * highPrioritySizes;                  //@synthesize highPrioritySizes=_highPrioritySizes - In the implementation block
@property (nonatomic,retain) NSMutableArray * mediumPrioritySizes;                //@synthesize mediumPrioritySizes=_mediumPrioritySizes - In the implementation block
@property (nonatomic,retain) NSMutableArray * lowPrioritySizes;                   //@synthesize lowPrioritySizes=_lowPrioritySizes - In the implementation block
@property (assign,nonatomic) CGSize currentTotalSize;                             //@synthesize currentTotalSize=_currentTotalSize - In the implementation block
+(id)sizesResolvingFirstPrioritizedSize:(id)arg1 secondPrioritizedSize:(id)arg2 inAvailableWidth:(double)arg3 ;
-(id)init;
-(void)addSize:(CGSize)arg1 withPriority:(unsigned long long)arg2 ;
-(id)removeLastSizeOfPriority:(unsigned long long)arg1 ;
-(CGSize)currentTotalSize;
-(void)setCurrentTotalSize:(CGSize)arg1 ;
-(NSMutableArray *)requiredPrioritySizes;
-(void)setRequiredPrioritySizes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)veryHighPrioritySizes;
-(void)setVeryHighPrioritySizes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)highPrioritySizes;
-(void)setHighPrioritySizes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mediumPrioritySizes;
-(void)setMediumPrioritySizes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)lowPrioritySizes;
-(void)setLowPrioritySizes:(NSMutableArray *)arg1 ;
@end

