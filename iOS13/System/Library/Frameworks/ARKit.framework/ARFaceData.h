/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface ARFaceData : NSObject <NSSecureCoding> {

	BOOL _mirrored;
	NSArray* _detectedFaces;
	NSDictionary* _faceMeshPayload;

}

@property (nonatomic,retain) NSArray * detectedFaces;                      //@synthesize detectedFaces=_detectedFaces - In the implementation block
@property (nonatomic,retain) NSDictionary * faceMeshPayload;               //@synthesize faceMeshPayload=_faceMeshPayload - In the implementation block
@property (assign,getter=isMirrored,nonatomic) BOOL mirrored;              //@synthesize mirrored=_mirrored - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isMirrored;
-(void)setMirrored:(BOOL)arg1 ;
-(NSArray *)detectedFaces;
-(void)setDetectedFaces:(NSArray *)arg1 ;
-(id)initWithMetadataObjects:(id)arg1 mirroredVideoInput:(BOOL)arg2 stripDetectionData:(BOOL)arg3 ;
-(NSDictionary *)faceMeshPayload;
-(void)setFaceMeshPayload:(NSDictionary *)arg1 ;
@end

