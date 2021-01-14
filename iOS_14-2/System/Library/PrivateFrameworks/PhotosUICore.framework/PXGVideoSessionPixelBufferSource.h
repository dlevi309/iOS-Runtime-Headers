/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXGDisplayAssetPixelBufferSource.h>

@class PXVideoSession, NSString;

@interface PXGVideoSessionPixelBufferSource : NSObject <PXChangeObserver, PXGDisplayAssetPixelBufferSource> {

	PXVideoSession* _videoSession;
	NSString* _bufferRequestIdentifier;
	/*^block*/id _pixelBufferDidChangeHandler;
	long long _desiredPlayState;

}

@property (assign,nonatomic) long long desiredPlayState;                          //@synthesize desiredPlayState=_desiredPlayState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CVBufferRef currentPixelBuffer; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,copy) id pixelBufferDidChangeHandler;                        //@synthesize pixelBufferDidChangeHandler=_pixelBufferDidChangeHandler - In the implementation block
-(id)init;
-(CGAffineTransform)preferredTransform;
-(void)setDesiredPlayState:(long long)arg1 ;
-(long long)desiredPlayState;
-(CVBufferRef)currentPixelBuffer;
-(void)setPixelBufferDidChangeHandler:(id)arg1 ;
-(id)pixelBufferDidChangeHandler;
-(id)initWithVideoSession:(id)arg1 ;
-(id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(void)_prepareVideoSession;
-(void)_updateVideoSession:(id)arg1 ;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

