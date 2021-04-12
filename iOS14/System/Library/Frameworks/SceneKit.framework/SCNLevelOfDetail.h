/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNGeometry;

@interface SCNLevelOfDetail : NSObject <NSCopying, NSSecureCoding> {

	C3DLODRef _lod;
	long long _mode;
	SCNGeometry* _geometry;

}

@property (readonly) SCNGeometry * geometry; 
@property (readonly) double screenSpaceRadius; 
@property (readonly) double worldSpaceDistance; 
+(BOOL)supportsSecureCoding;
+(id)levelOfDetailWithGeometry:(id)arg1 screenSpaceRadius:(double)arg2 ;
+(id)levelOfDetailWithGeometry:(id)arg1 worldSpaceDistance:(double)arg2 ;
-(SCNGeometry *)geometry;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(id)thresholdValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(const void*)__CFObject;
-(long long)thresholdMode;
-(double)screenSpaceRadius;
-(double)worldSpaceDistance;
-(void)_setupWithGeometry:(id)arg1 thresholdMode:(long long)arg2 value:(double)arg3 ;
-(id)initWithGeometry:(id)arg1 thresholdMode:(long long)arg2 lod:(C3DLODRef)arg3 ;
-(void)_customEncodingOfSCNLevelOfDetail:(id)arg1 ;
-(void)_didDecodeSCNLevelOfDetail:(id)arg1 ;
-(id)initWithGeometry:(id)arg1 thresholdMode:(long long)arg2 thresholdValue:(id)arg3 ;
@end

