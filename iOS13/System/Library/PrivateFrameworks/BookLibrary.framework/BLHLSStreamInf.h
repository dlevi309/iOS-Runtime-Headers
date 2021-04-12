/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@class NSURL, NSString;

@interface BLHLSStreamInf : NSObject {

	NSURL* _url;
	unsigned long long _bandwidth;
	unsigned long long _averageBandwidth;
	NSString* _codecs;
	NSString* _audio;

}

@property (nonatomic,retain) NSURL * url;                                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) unsigned long long bandwidth;                                   //@synthesize bandwidth=_bandwidth - In the implementation block
@property (nonatomic,readonly) unsigned long long averageBandwidth;                            //@synthesize averageBandwidth=_averageBandwidth - In the implementation block
@property (nonatomic,readonly) unsigned long long averageBandwidthFallbackToPeak; 
@property (nonatomic,readonly) NSString * codecs;                                              //@synthesize codecs=_codecs - In the implementation block
@property (nonatomic,readonly) NSString * audio;                                               //@synthesize audio=_audio - In the implementation block
-(id)description;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(unsigned long long)bandwidth;
-(NSString *)codecs;
-(NSString *)audio;
-(void)setPropertiesFromAttributeList:(id)arg1 ;
-(unsigned long long)averageBandwidthFallbackToPeak;
-(unsigned long long)averageBandwidth;
@end

