/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
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
-(BOOL)isMirrored;
-(void)setMirrored:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)detectedFaces;
-(void)setDetectedFaces:(NSArray *)arg1 ;
-(void)setFaceMeshPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)faceMeshPayload;
-(id)initWithMetadataObjects:(id)arg1 mirroredVideoInput:(BOOL)arg2 stripDetectionData:(BOOL)arg3 ;
@end

