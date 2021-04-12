/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSWPOffscreenColumn <NSObject>
@property (nonatomic,readonly) unsigned long long startCharIndex; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) unsigned long long startAnchoredCharIndex; 
@property (nonatomic,readonly) NSRange anchoredRange; 
@property (nonatomic,readonly) unsigned long long nextWidowPullsDownFromCharIndex; 
@required
-(NSRange)range;
-(unsigned long long)startCharIndex;
-(NSRange)anchoredRange;
-(unsigned long long)nextWidowPullsDownFromCharIndex;
-(void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeAutoNumberFootnoteCount:(unsigned long long)arg3;
-(unsigned long long)startAnchoredCharIndex;

@end

