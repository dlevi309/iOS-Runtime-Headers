/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSURL, WFImage, NSString, NSDictionary;

@interface WFGiphyImage : MTLModel <MTLJSONSerializing> {

	NSURL* _url;
	NSURL* _videoURL;
	unsigned long long _fileSize;
	unsigned long long _width;
	unsigned long long _height;
	WFImage* _cachedImage;

}

@property (nonatomic,copy,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSURL * videoURL;                            //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,readonly) unsigned long long fileSize;                      //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) unsigned long long width;                         //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                        //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) WFImage * cachedImage;                              //@synthesize cachedImage=_cachedImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
+(id)JSONTransformerForKey:(id)arg1 ;
-(unsigned long long)fileSize;
-(NSURL *)url;
-(unsigned long long)width;
-(unsigned long long)height;
-(WFImage *)cachedImage;
-(void)setCachedImage:(WFImage *)arg1 ;
-(NSURL *)videoURL;
@end

