/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageExportFormat.h>

@interface NUImageExportFormatJPEG : NUImageExportFormat {

	double _compressionQuality;

}

@property (assign,nonatomic) double compressionQuality; 
-(double)compressionQuality;
-(void)setCompressionQuality:(double)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fileType;
-(int)renderFormat;
-(void)addImageDestinationOptionsToImageProperties:(id)arg1 ;
@end

