/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <libobjc.A.dylib/PFAVReaderWriterAdjustDelegate.h>

@class PFAVReaderWriter, CIContext, NSString;

@interface PFColorConverter : NSObject <PFAVReaderWriterAdjustDelegate> {

	PFAVReaderWriter* _readerWriter;
	CIContext* _conversionContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)adjustPixelBuffer:(CVBufferRef)arg1 toOutputBuffer:(CVBufferRef)arg2 ;
-(void)convertWithVideoURL:(id)arg1 outURL:(id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
@end

