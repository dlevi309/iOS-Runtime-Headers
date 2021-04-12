/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NSDictionary;

@interface PIReframeKeyframe : NSObject {

	SCD_Struct_PI8 _time;
	SCD_Struct_PI9 _homography;

}

@property (nonatomic,readonly) SCD_Struct_PI8 time;                                       //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PI9 homography;                                 //@synthesize homography=_homography - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
-(SCD_Struct_PI8)time;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithTime:(SCD_Struct_PI8)arg1 homography:(SCD_Struct_PI9)arg2 ;
-(SCD_Struct_PI9)homography;
@end

