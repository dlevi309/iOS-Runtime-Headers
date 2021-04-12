/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)duration;
-(BOOL)isHeader;
-(id)initWithVideoSegmentMetadata:(id)arg1 ;
@end

