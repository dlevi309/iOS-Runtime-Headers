/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWFormat : NSObject

@property (readonly) unsigned mediaType; 
@property (readonly) opaqueCMFormatDescriptionRef formatDescription; 
+(id)formatByResolvingRequirements:(id)arg1 printErrors:(BOOL)arg2 ;
+(id)formatByResolvingRequirements:(id)arg1 ;
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
@end

