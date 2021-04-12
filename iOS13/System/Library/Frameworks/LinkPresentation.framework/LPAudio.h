/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSData, NSObject, AVURLAsset, LPAudioProperties, NSURL, NSString, AVAsset;

@interface LPAudio : NSObject <AVAssetResourceLoaderDelegate, NSSecureCoding> {

	NSData* _data;
	NSObject*<OS_dispatch_queue> _mediaLoadingQueue;
	AVURLAsset* _asset;
	LPAudioProperties* _properties;
	NSURL* _fileURL;
	NSURL* _streamingURL;
	NSString* _MIMEType;

}

@property (nonatomic,readonly) unsigned long long _encodedSize; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * MIMEType;                         //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) AVAsset * _asset;                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                    //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * streamingURL;                      //@synthesize streamingURL=_streamingURL - In the implementation block
@property (nonatomic,copy,readonly) LPAudioProperties * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)MIMEType;
-(LPAudioProperties *)properties;
-(AVAsset *)_asset;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(id)initWithStreamingURL:(id)arg1 properties:(id)arg2 ;
-(NSURL *)streamingURL;
-(id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3 ;
-(BOOL)_shouldEncodeData;
-(void)_mapDataFromFileURL;
-(unsigned long long)_encodedSize;
-(id)_initWithAudio:(id)arg1 ;
@end

