/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class NSString, BWNodeOutput, BWFormat, BWPixelBufferPool, BWDataBufferPool, BWVideoFormat, BWPointCloudFormat;

@interface BWNodeOutputMediaProperties : NSObject {

	NSString* _associatedAttachedMediaKey;
	BWNodeOutput* _owningNodeOutput;
	BWFormat* _resolvedFormat;
	BWFormat* _liveFormat;
	BWPixelBufferPool* _preparedPixelBufferPool;
	BWPixelBufferPool* _livePixelBufferPool;
	int _preparedPixelBufferPoolSize;
	int _livePixelBufferPoolSize;
	BWDataBufferPool* _preparedDataBufferPool;
	BWDataBufferPool* _liveDataBufferPool;
	int _preparedDataBufferPoolSize;
	int _liveDataBufferPoolSize;
	int _resolvedRetainedBufferCount;
	unsigned _mediaType;

}

@property (nonatomic,retain) BWFormat * liveFormat;                                        //@synthesize liveFormat=_liveFormat - In the implementation block
@property (nonatomic,readonly) unsigned mediaType;                                         //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) BWFormat * resolvedFormat;                                    //@synthesize resolvedFormat=_resolvedFormat - In the implementation block
@property (nonatomic,retain) BWPixelBufferPool * preparedPixelBufferPool;                  //@synthesize preparedPixelBufferPool=_preparedPixelBufferPool - In the implementation block
@property (assign,nonatomic) int preparedPixelBufferPoolSize;                              //@synthesize preparedPixelBufferPoolSize=_preparedPixelBufferPoolSize - In the implementation block
@property (nonatomic,retain) BWPixelBufferPool * livePixelBufferPool; 
@property (assign,nonatomic) int livePixelBufferPoolSize;                                  //@synthesize livePixelBufferPoolSize=_livePixelBufferPoolSize - In the implementation block
@property (nonatomic,retain) BWDataBufferPool * preparedDataBufferPool;                    //@synthesize preparedDataBufferPool=_preparedDataBufferPool - In the implementation block
@property (assign,nonatomic) int preparedDataBufferPoolSize;                               //@synthesize preparedDataBufferPoolSize=_preparedDataBufferPoolSize - In the implementation block
@property (nonatomic,retain) BWDataBufferPool * liveDataBufferPool; 
@property (assign,nonatomic) int liveDataBufferPoolSize;                                   //@synthesize liveDataBufferPoolSize=_liveDataBufferPoolSize - In the implementation block
@property (nonatomic,readonly) BWVideoFormat * resolvedVideoFormat; 
@property (nonatomic,readonly) BWPointCloudFormat * resolvedPointCloudFormat; 
@property (assign,nonatomic) int resolvedRetainedBufferCount;                              //@synthesize resolvedRetainedBufferCount=_resolvedRetainedBufferCount - In the implementation block
@property (nonatomic,readonly) BWVideoFormat * liveVideoFormat; 
-(void)dealloc;
-(unsigned)mediaType;
-(void)setResolvedFormat:(BWFormat *)arg1 ;
-(BWPixelBufferPool *)livePixelBufferPool;
-(BWVideoFormat *)resolvedVideoFormat;
-(void)setLiveFormat:(BWFormat *)arg1 ;
-(BWFormat *)liveFormat;
-(BWFormat *)resolvedFormat;
-(BWPointCloudFormat *)resolvedPointCloudFormat;
-(BWVideoFormat *)liveVideoFormat;
-(void)setPreparedPixelBufferPool:(BWPixelBufferPool *)arg1 ;
-(void)setPreparedDataBufferPool:(BWDataBufferPool *)arg1 ;
-(int)resolvedRetainedBufferCount;
-(void)setPreparedPixelBufferPoolSize:(int)arg1 ;
-(int)preparedPixelBufferPoolSize;
-(BWPixelBufferPool *)preparedPixelBufferPool;
-(void)setLivePixelBufferPool:(BWPixelBufferPool *)arg1 ;
-(void)setLivePixelBufferPoolSize:(int)arg1 ;
-(BWDataBufferPool *)preparedDataBufferPool;
-(void)setLiveDataBufferPool:(BWDataBufferPool *)arg1 ;
-(int)preparedDataBufferPoolSize;
-(void)setLiveDataBufferPoolSize:(int)arg1 ;
-(void)setPreparedDataBufferPoolSize:(int)arg1 ;
-(void)_setOwningNodeOutput:(id)arg1 associatedAttachedMediaKey:(id)arg2 ;
-(void)setNodePreparedPixelBufferPool:(id)arg1 ;
-(void)setPreparedSharedPixelBufferPool:(id)arg1 ;
-(void)setNodePreparedDataBufferPool:(id)arg1 ;
-(void)setPreparedSharedDataBufferPool:(id)arg1 ;
-(BWDataBufferPool *)liveDataBufferPool;
-(void)setResolvedRetainedBufferCount:(int)arg1 ;
-(int)livePixelBufferPoolSize;
-(int)liveDataBufferPoolSize;
@end

