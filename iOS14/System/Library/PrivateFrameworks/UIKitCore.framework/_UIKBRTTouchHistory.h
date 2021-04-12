/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addInfo:(id)arg1 ;
-(id)initWithIsLeftHand:(BOOL)arg1 ;
-(void)removeInfo:(id)arg1 ;
-(void)setIsLeftHand:(BOOL)arg1 ;
-(BOOL)containsInfo:(id)arg1 ;
-(CGPoint)historyOffset;
-(void)adjustHistoryOffset:(CGPoint)arg1 ;
-(void)_updateOffset;
-(void)_decayHistoryToSize:(unsigned long long)arg1 ;
-(void)clearHistory;
-(void)reset;
-(BOOL)isLeftHand;
-(BOOL)hasHistory;
-(double)lastTime;
-(void)decayHistory;
-(void)_sortHistory;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

