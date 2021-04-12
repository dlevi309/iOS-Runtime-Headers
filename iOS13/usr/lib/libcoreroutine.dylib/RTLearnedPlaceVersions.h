/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RTLearnedPlace;

@interface RTLearnedPlaceVersions : NSObject <NSCopying> {

	BOOL _isRotted;
	RTLearnedPlace* _inferredVersion;
	RTLearnedPlace* _existingVersion;
	RTLearnedPlace* _truthfulCounterpart;

}

@property (nonatomic,retain) RTLearnedPlace * inferredVersion;                  //@synthesize inferredVersion=_inferredVersion - In the implementation block
@property (nonatomic,retain) RTLearnedPlace * existingVersion;                  //@synthesize existingVersion=_existingVersion - In the implementation block
@property (nonatomic,retain) RTLearnedPlace * truthfulCounterpart;              //@synthesize truthfulCounterpart=_truthfulCounterpart - In the implementation block
@property (assign,nonatomic) BOOL isRotted;                                     //@synthesize isRotted=_isRotted - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(RTLearnedPlace *)existingVersion;
-(RTLearnedPlace *)truthfulCounterpart;
-(RTLearnedPlace *)inferredVersion;
-(void)setInferredVersion:(RTLearnedPlace *)arg1 ;
-(void)setExistingVersion:(RTLearnedPlace *)arg1 ;
-(void)setTruthfulCounterpart:(RTLearnedPlace *)arg1 ;
-(id)trueVersion;
-(BOOL)isRotted;
-(void)setIsRotted:(BOOL)arg1 ;
@end

