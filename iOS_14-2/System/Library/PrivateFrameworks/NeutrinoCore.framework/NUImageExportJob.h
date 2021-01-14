/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUExportJob.h>

@class NSData;

@interface NUImageExportJob : NUExportJob {

	NSData* _destinationData;

}
-(BOOL)render:(out id*)arg1 ;
-(id)result;
-(void)cleanUp;
-(id)renderer:(out id*)arg1 ;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)initWithExportRequest:(id)arg1 ;
-(id)initWithImageExportRequest:(id)arg1 ;
-(id)imageExportRequest;
-(id)_filterProperties:(id)arg1 ;
-(id)imageDestinationOptions;
@end

