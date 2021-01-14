/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PFPhotosFaceRepresentation.h>

@interface PLFaceDimension : NSObject <PFPhotosFaceRepresentation> {

	long long _sourceWidth;
	long long _sourceHeight;
	double _centerX;
	double _centerY;
	double _size;

}
-(double)photosFaceRepresentationBlurScore;
-(long long)photosFaceRepresentationClusterSequenceNumber;
-(id)photosFaceRepresentationLocalIdentifier;
-(double)photosFaceRepresentationRoll;
-(double)photosFaceRepresentationCenterY;
-(long long)photosFaceRepresentationSourceWidth;
-(double)photosFaceRepresentationCenterX;
-(long long)photosFaceRepresentationSourceHeight;
-(id)description;
-(id)initWithSourceWidth:(long long)arg1 sourceHeight:(long long)arg2 centerX:(double)arg3 centerY:(double)arg4 size:(double)arg5 ;
-(BOOL)photosFaceRepresentationIsLeftEyeClosed;
-(BOOL)photosFaceRepresentationHasSmile;
-(long long)photosFaceRepresentationQualityMeasure;
-(double)photosFaceRepresentationQuality;
-(double)photosFaceRepresentationSize;
-(BOOL)photosFaceRepresentationIsRightEyeClosed;
@end

