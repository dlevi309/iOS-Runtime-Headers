/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <CoreRecognition/CRCameraReaderOutput.h>

@class NSAttributedString;

@interface CRCameraReaderOutputCameraText : CRCameraReaderOutput

@property (copy) NSAttributedString * overlayString; 
@property (readonly) CGRect boundingBox; 
@property (readonly) float rotation; 
-(void)setRotation:(float)arg1 ;
-(void)setBoundingBox:(CGRect)arg1 ;
-(float)rotation;
-(void)setOverlayString:(NSAttributedString *)arg1 ;
-(CGRect)boundingBox;
-(NSAttributedString *)overlayString;
@end

