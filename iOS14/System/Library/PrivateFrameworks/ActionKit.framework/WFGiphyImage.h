/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSURL, WFImage, NSDictionary, NSString;

@interface WFGiphyImage : MTLModel <NSSecureCoding, MTLJSONSerializing> {

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
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)JSONTransformerForKey:(id)arg1 ;
+(id)JSONKeyPathsByPropertyKey;
-(unsigned long long)width;
-(void)setCachedImage:(WFImage *)arg1 ;
-(unsigned long long)fileSize;
-(unsigned long long)height;
-(NSURL *)url;
-(NSURL *)videoURL;
-(WFImage *)cachedImage;
@end

