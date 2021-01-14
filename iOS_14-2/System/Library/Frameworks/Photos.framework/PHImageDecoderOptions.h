/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@interface PHImageDecoderOptions : NSObject {

	BOOL _shouldLoadGainMap;
	BOOL _applyOrientationTransform;
	BOOL _optimizeForDrawing;
	BOOL _highPriority;
	BOOL _waitUntilComplete;
	long long _maximumLongSideLength;
	long long _resizeMode;

}

@property (assign,nonatomic) BOOL shouldLoadGainMap;                       //@synthesize shouldLoadGainMap=_shouldLoadGainMap - In the implementation block
@property (assign,nonatomic) long long maximumLongSideLength;              //@synthesize maximumLongSideLength=_maximumLongSideLength - In the implementation block
@property (assign,nonatomic) long long resizeMode;                         //@synthesize resizeMode=_resizeMode - In the implementation block
@property (assign,nonatomic) BOOL applyOrientationTransform;               //@synthesize applyOrientationTransform=_applyOrientationTransform - In the implementation block
@property (assign,nonatomic) BOOL optimizeForDrawing;                      //@synthesize optimizeForDrawing=_optimizeForDrawing - In the implementation block
@property (assign,nonatomic) BOOL highPriority;                            //@synthesize highPriority=_highPriority - In the implementation block
@property (assign,nonatomic) BOOL waitUntilComplete;                       //@synthesize waitUntilComplete=_waitUntilComplete - In the implementation block
-(void)setShouldLoadGainMap:(BOOL)arg1 ;
-(BOOL)waitUntilComplete;
-(long long)resizeMode;
-(BOOL)applyOrientationTransform;
-(void)setMaximumLongSideLength:(long long)arg1 ;
-(BOOL)shouldLoadGainMap;
-(void)setApplyOrientationTransform:(BOOL)arg1 ;
-(void)setWaitUntilComplete:(BOOL)arg1 ;
-(BOOL)highPriority;
-(void)setResizeMode:(long long)arg1 ;
-(void)setOptimizeForDrawing:(BOOL)arg1 ;
-(long long)maximumLongSideLength;
-(BOOL)optimizeForDrawing;
-(void)setHighPriority:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

