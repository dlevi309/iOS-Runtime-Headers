/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV3.bundle/SDOFRenderingV3
*/


#import <SDOFRenderingV3/SDOFRenderingV3-Structs.h>
@class NSMutableDictionary;

@interface SDOFRenderingDiagnostics : NSObject {

	NSMutableDictionary* _diagDict;

}
-(id)init;
-(void)clearDiagnostics;
-(id)createDiagnosticsDictionary;
-(id)dictFromFaces:(SCD_Struct_Fi6*)arg1 numFaces:(int)arg2 ;
-(id)dictFromFace:(SCD_Struct_Fi6)arg1 ;
-(void)addDetectedFaces:(SCD_Struct_Fi6*)arg1 numFaces:(int)arg2 ;
@end

