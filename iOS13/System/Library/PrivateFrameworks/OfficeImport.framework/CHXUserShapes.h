/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXUserShapes : NSObject
+(void)readFromCharSpaceNode:(xmlNode*)arg1 state:(id)arg2 ;
+(float)readRealCoordinate:(xmlNode*)arg1 ;
+(CGPoint)readRealPoint:(xmlNode*)arg1 ;
+(id)readDrawable:(xmlNode*)arg1 anchor:(id)arg2 drawingState:(id)arg3 ;
+(id)readRelativeSizeAnchor:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readAbsoluteSizeAnchor:(xmlNode*)arg1 drawingState:(id)arg2 ;
@end

