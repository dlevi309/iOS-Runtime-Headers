/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSString;

@interface HMDCameraClipImportPosterFrameMetadata : NSObject {

	NSString* _resourcePath;
	double _offset;
	unsigned long long _width;
	unsigned long long _height;

}

@property (copy,readonly) NSString * resourcePath;              //@synthesize resourcePath=_resourcePath - In the implementation block
@property (readonly) double offset;                             //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned long long width;                  //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long height;                 //@synthesize height=_height - In the implementation block
-(unsigned long long)width;
-(NSString *)resourcePath;
-(unsigned long long)height;
-(double)offset;
-(id)initWithPosterFrameMetadata:(id)arg1 ;
@end

