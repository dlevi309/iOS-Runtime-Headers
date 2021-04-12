/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <libobjc.A.dylib/DOCThumbnailListener.h>
#import <libobjc.A.dylib/DOCThumbnail.h>

@protocol DOCThumbnail;
@class UIImage, NSMutableArray, FPItem, DOCThumbnailGenerator, DOCThumbnailDescriptor, NSHashTable, DOCThumbnailRequest, NSString;

@interface DOCItemThumbnail : NSObject <DOCThumbnailListener, DOCThumbnail> {

	NSMutableArray* _generationCompletionHandlers;
	BOOL _representativeIcon;
	BOOL _needsUpdate;
	FPItem* _item;
	id<DOCThumbnail> _fallback;
	DOCThumbnailGenerator* _generator;
	DOCThumbnailDescriptor* _descriptor;
	NSHashTable* _listeners;
	DOCThumbnailRequest* _currentRequest;
	UIImage* _thumbnailImage;

}

@property (assign,nonatomic) BOOL representativeIcon;                                 //@synthesize representativeIcon=_representativeIcon - In the implementation block
@property (nonatomic,__weak,readonly) DOCThumbnailGenerator * generator;              //@synthesize generator=_generator - In the implementation block
@property (nonatomic,readonly) DOCThumbnailDescriptor * descriptor;                   //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) BOOL needsUpdate;                                      //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (nonatomic,readonly) NSHashTable * listeners;                               //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,readonly) DOCThumbnailRequest * currentRequest;                  //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnailImage;                              //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,readonly) FPItem * item;                                         //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) id<DOCThumbnail> fallback;                               //@synthesize fallback=_fallback - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double minimumSize; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) unsigned long long style; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) BOOL isRepresentativeIcon; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail; 
-(CGSize)size;
-(FPItem *)item;
-(double)scale;
-(unsigned long long)style;
-(BOOL)needsUpdate;
-(double)minimumSize;
-(DOCThumbnailDescriptor *)descriptor;
-(DOCThumbnailRequest *)currentRequest;
-(NSHashTable *)listeners;
-(BOOL)isInteractive;
-(void)setNeedsUpdate;
-(id<DOCThumbnail>)fallback;
-(BOOL)isLoading;
-(DOCThumbnailGenerator *)generator;
-(UIImage *)thumbnail;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)_notifyListeners;
-(UIImage *)thumbnailImage;
-(void)setFallback:(id<DOCThumbnail>)arg1 ;
-(void)updateItemTo:(id)arg1 ;
-(void)fetchWithOptions:(unsigned long long)arg1 ;
-(id)initWithGenerator:(id)arg1 item:(id)arg2 descriptor:(id)arg3 fallback:(id)arg4 ;
-(BOOL)isRepresentativeIcon;
-(void)thumbnailLoaded:(id)arg1 ;
-(void)_cancelCurrentRequest;
-(void)scheduleUpdateIfNeeded;
-(void)_callGenerationCompletionHandlers;
-(void)_fetchThumbnailWithOptions:(unsigned long long)arg1 ;
-(void)thumbnailOperationFailedToLoadThumbnail;
-(void)thumbnailOperationDidLoadThumbnail:(id)arg1 representativeIcon:(BOOL)arg2 ;
-(BOOL)registerGenerationCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hasFinishedTryingToFetchCorrectThumbnail;
-(BOOL)representativeIcon;
-(void)setRepresentativeIcon:(BOOL)arg1 ;
@end

