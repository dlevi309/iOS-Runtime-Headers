/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/QLThumbnailHost.h>

@protocol QLThumbnailSurfaceGeneratorProtocol;
@class NSOperationQueue, NSString;

@interface QLThumbnailHostContext : NSExtensionContext <QLThumbnailHost> {

	NSOperationQueue* _thumbnailGenerationConcurrenQueue;
	id<QLThumbnailSurfaceGeneratorProtocol> _ioSurfaceGenerator;

}

@property (nonatomic,retain) NSOperationQueue * thumbnailGenerationConcurrenQueue;                           //@synthesize thumbnailGenerationConcurrenQueue=_thumbnailGenerationConcurrenQueue - In the implementation block
@property (assign,nonatomic,__weak) id<QLThumbnailSurfaceGeneratorProtocol> ioSurfaceGenerator;              //@synthesize ioSurfaceGenerator=_ioSurfaceGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)protocolServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)ioSurfaceWithSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)setIoSurfaceGenerator:(id<QLThumbnailSurfaceGeneratorProtocol>)arg1 ;
-(NSOperationQueue *)thumbnailGenerationConcurrenQueue;
-(id<QLThumbnailSurfaceGeneratorProtocol>)ioSurfaceGenerator;
-(void)generateThumbnailOfSize:(CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withItem:(id)arg5 ioSurfaceGenerator:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)setThumbnailGenerationConcurrenQueue:(NSOperationQueue *)arg1 ;
@end

