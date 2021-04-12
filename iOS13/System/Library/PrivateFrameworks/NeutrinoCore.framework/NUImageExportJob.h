/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUExportJob.h>

@class NSData;

@interface NUImageExportJob : NUExportJob {

	NSData* _destinationData;

}
-(id)result;
-(BOOL)render:(out id*)arg1 ;
-(void)cleanUp;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)initWithExportRequest:(id)arg1 ;
-(id)initWithImageExportRequest:(id)arg1 ;
-(id)imageExportRequest;
-(id)_filterProperties:(id)arg1 ;
-(id)imageDestinationOptions;
@end

