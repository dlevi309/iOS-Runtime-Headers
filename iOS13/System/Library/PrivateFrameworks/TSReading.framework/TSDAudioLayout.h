/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDMediaLayout.h>

@interface TSDAudioLayout : TSDMediaLayout
-(id)initWithInfo:(id)arg1 ;
-(BOOL)canFlip;
-(id)movieInfo;
-(int)wrapType;
-(id)layoutGeometryFromInfo;
-(BOOL)shouldDisplayGuides;
-(BOOL)allowsConnections;
-(BOOL)supportsRotation;
-(CGRect)alignmentFrame;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(CGRect)computeAlignmentFrameInRoot:(BOOL)arg1 ;
@end

