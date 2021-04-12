/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PXTransition : NSObject
+(id)transitionNodeMap;
+(int)readOrientation:(xmlNode*)arg1 attribute:(const char*)arg2 defaultValue:(int)arg3 ;
+(int)readDirection:(xmlNode*)arg1 defaultValue:(int)arg2 ;
+(int)readReverseDirection:(xmlNode*)arg1 defaultValue:(int)arg2 ;
+(int)readInOut:(xmlNode*)arg1 defaultValue:(int)arg2 ;
+(BOOL)mapDirection:(id)arg1 outDir:(int*)arg2 ;
+(void)writeReverseOrientation:(int)arg1 withAttributeName:(id)arg2 file:(id)arg3 ;
+(void)writeOrientation:(int)arg1 withAttributeName:(id)arg2 file:(id)arg3 ;
+(void)writeDirection:(int)arg1 file:(id)arg2 ;
+(void)writeReverseDirection:(int)arg1 file:(id)arg2 ;
+(void)writeInOut:(int)arg1 file:(id)arg2 ;
+(void)writeReverseInOut:(int)arg1 file:(id)arg2 ;
+(void)writeTransitionAttributes:(id)arg1 attributePrefix:(id)arg2 file:(id)arg3 ;
+(BOOL)isPowerPoint2013TransitionType:(int)arg1 ;
+(void)writeTransitionOptions:(id)arg1 transitionType:(int)arg2 file:(id)arg3 ;
+(BOOL)isPowerPoint2010TransitionType:(int)arg1 ;
+(id)directionAttributeMap;
+(id)reverseDirectionAttributeMap;
+(void)readTransitionFromNode:(xmlNode*)arg1 tgtTransition:(id)arg2 drawingState:(id)arg3 ;
+(void)writeTransitionFromSlideBase:(id)arg1 file:(id)arg2 state:(id)arg3 ;
@end

