/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)audio;
-(NSString *)codecs;
-(unsigned long long)bandwidth;
-(NSURL *)url;
-(id)description;
-(void)setPropertiesFromAttributeList:(id)arg1 ;
-(unsigned long long)averageBandwidthFallbackToPeak;
-(unsigned long long)averageBandwidth;
-(void)setUrl:(NSURL *)arg1 ;
@end

