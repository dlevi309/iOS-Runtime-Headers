/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@protocol VNPersonsModelFaceModelDataProvider <NSObject>
@required
-(unsigned long long)faceModelPersonsCount;
-(id)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)arg1;
-(unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id)arg1;
-(unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg1;
-(id)faceModelFaceObservationAtIndex:(unsigned long long)arg1 forPersonAtIndex:(unsigned long long)arg2;

@end

