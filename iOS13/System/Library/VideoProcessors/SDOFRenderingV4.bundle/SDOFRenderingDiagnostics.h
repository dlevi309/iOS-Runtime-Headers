/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV4.bundle/SDOFRenderingV4
*/


#import <SDOFRenderingV4/SDOFRenderingV4-Structs.h>
@class NSMutableDictionary;

@interface SDOFRenderingDiagnostics : NSObject {

	NSMutableDictionary* _diagDict;

}
-(id)init;
-(void)clearDiagnostics;
-(id)createDiagnosticsDictionary;
-(id)dictFromFaces:(SCD_Struct_Fi17*)arg1 numFaces:(int)arg2 ;
-(id)dictFromFace:(SCD_Struct_Fi17)arg1 ;
-(void)addDetectedFaces:(SCD_Struct_Fi17*)arg1 numFaces:(int)arg2 ;
@end

