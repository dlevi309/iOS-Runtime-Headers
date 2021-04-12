/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NAIdentifiable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMCameraClip, NSDate, NSString;

@interface HFCameraClipPosition : NSObject <NAIdentifiable, NSCopying> {

	HMCameraClip* _clip;
	double _offset;

}

@property (nonatomic,readonly) HMCameraClip * clip;                 //@synthesize clip=_clip - In the implementation block
@property (nonatomic,readonly) double offset;                       //@synthesize offset=_offset - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)positionWithClip:(id)arg1 offset:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(double)offset;
-(HMCameraClip *)clip;
-(id)initWithClip:(id)arg1 offset:(double)arg2 ;
@end

