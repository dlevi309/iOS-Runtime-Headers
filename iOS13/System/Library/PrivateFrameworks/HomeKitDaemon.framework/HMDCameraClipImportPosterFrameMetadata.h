/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)resourcePath;
-(unsigned long long)width;
-(unsigned long long)height;
-(double)offset;
-(id)initWithPosterFrameMetadata:(id)arg1 ;
@end

