/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFormat.h>

@interface BWMetadataFormat : BWFormat {

	opaqueCMFormatDescriptionRef _desc;

}
+(void)initialize;
+(id)formatWithMetadataFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(id)debugDescription;
-(id)description;
-(id)_initWithMetadataFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)dealloc;
@end

