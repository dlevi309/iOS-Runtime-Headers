/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIDetector.h>

@class CIContext;

@interface CIVNFaceDetector : CIDetector {

	CIContext* context;

}

@property (retain,readonly) CIContext * context; 
-(CIContext *)context;
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
@end

