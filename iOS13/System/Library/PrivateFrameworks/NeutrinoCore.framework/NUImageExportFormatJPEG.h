/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageExportFormat.h>

@interface NUImageExportFormatJPEG : NUImageExportFormat {

	double _compressionQuality;

}

@property (assign,nonatomic) double compressionQuality; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fileType;
-(double)compressionQuality;
-(void)setCompressionQuality:(double)arg1 ;
-(int)renderFormat;
-(void)addImageDestinationOptionsToImageProperties:(id)arg1 ;
@end

