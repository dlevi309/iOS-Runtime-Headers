/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@interface CHCutPoint : NSObject {

	BOOL _isEndOfStroke;
	long long _strokeIndex;
	long long _pointIndex;

}

@property (nonatomic,readonly) long long strokeIndex;              //@synthesize strokeIndex=_strokeIndex - In the implementation block
@property (nonatomic,readonly) long long pointIndex;               //@synthesize pointIndex=_pointIndex - In the implementation block
@property (nonatomic,readonly) BOOL isEndOfStroke;                 //@synthesize isEndOfStroke=_isEndOfStroke - In the implementation block
+(id)sortedCHCutPointArray:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(unsigned long long)hash;
-(long long)pointIndex;
-(BOOL)isEqual:(id)arg1 ;
-(long long)strokeIndex;
-(BOOL)isEndOfStroke;
-(BOOL)isStartOfStroke;
-(id)initWithStrokeIndex:(long long)arg1 pointIndex:(long long)arg2 isEndOfStroke:(BOOL)arg3 ;
@end

