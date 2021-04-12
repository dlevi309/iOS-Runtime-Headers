/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _UIKBRTTouchHistory : NSObject <NSCopying> {

	NSMutableArray* _history;
	CGPoint _historyOffset;
	double _lastDecayTime;
	BOOL _isLeftHand;

}

@property (nonatomic,readonly) CGPoint historyOffset; 
@property (assign,nonatomic) BOOL isLeftHand;                      //@synthesize isLeftHand=_isLeftHand - In the implementation block
@property (nonatomic,readonly) BOOL hasHistory; 
@property (nonatomic,readonly) double lastTime; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(void)clearHistory;
-(id)initWithIsLeftHand:(BOOL)arg1 ;
-(void)setIsLeftHand:(BOOL)arg1 ;
-(void)addInfo:(id)arg1 ;
-(BOOL)isLeftHand;
-(BOOL)containsInfo:(id)arg1 ;
-(void)removeInfo:(id)arg1 ;
-(BOOL)hasHistory;
-(double)lastTime;
-(void)decayHistory;
-(CGPoint)historyOffset;
-(void)adjustHistoryOffset:(CGPoint)arg1 ;
-(void)_updateOffset;
-(void)_decayHistoryToSize:(unsigned long long)arg1 ;
-(void)_sortHistory;
@end

