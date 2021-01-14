/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSString;

@interface HMDCameraClipImportVideoSegmentMetadata : NSObject {

	BOOL _header;
	NSString* _resourcePath;
	double _duration;

}

@property (copy,readonly) NSString * resourcePath;              //@synthesize resourcePath=_resourcePath - In the implementation block
@property (getter=isHeader,readonly) BOOL header;               //@synthesize header=_header - In the implementation block
@property (readonly) double duration;                           //@synthesize duration=_duration - In the implementation block
-(NSString *)resourcePath;
-(BOOL)isHeader;
-(double)duration;
-(id)initWithVideoSegmentMetadata:(id)arg1 ;
@end

