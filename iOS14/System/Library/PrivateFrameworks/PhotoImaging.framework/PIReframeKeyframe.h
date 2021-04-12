/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NSDictionary;

@interface PIReframeKeyframe : NSObject {

	SCD_Struct_PI7 _time;
	SCD_Struct_PI9 _homography;

}

@property (nonatomic,readonly) SCD_Struct_PI7 time;                                       //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PI9 homography;                                 //@synthesize homography=_homography - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(id)keyframesFromDictionaryRepresentations:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(SCD_Struct_PI7)time;
-(id)description;
-(SCD_Struct_PI9)homography;
-(id)initWithTime:(SCD_Struct_PI7)arg1 homography:(SCD_Struct_PI9)arg2 ;
@end

