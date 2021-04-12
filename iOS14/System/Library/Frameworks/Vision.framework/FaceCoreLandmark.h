/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/libfaceCore.dylib
*/


#import <libfaceCore.dylib/libfaceCore.dylib-Structs.h>
@class NSString;

@interface FaceCoreLandmark : NSObject {

	NSString* type;
	unsigned long long pointCount;
	CGPoint* points;

}

@property (readonly) NSString * type; 
@property (readonly) unsigned long long pointCount; 
@property (readonly) CGPoint* points; 
+(id)landmarkWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(CGPoint*)arg3 ;
-(NSString *)type;
-(CGPoint*)points;
-(unsigned long long)pointCount;
-(void)dealloc;
-(id)initWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(CGPoint*)arg3 ;
@end

