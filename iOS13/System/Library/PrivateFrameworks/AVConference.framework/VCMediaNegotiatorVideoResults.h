/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class VCVideoRuleCollections, NSMutableDictionary, NSDictionary;

@interface VCMediaNegotiatorVideoResults : NSObject {

	BOOL _isSupported;
	unsigned _remoteSSRC;
	BOOL _isRTCPFBEnabled;
	VCVideoRuleCollections* _videoRuleCollections;
	NSMutableDictionary* _featureStrings;
	NSMutableDictionary* _parameterSets;
	unsigned _customVideoWidth;
	unsigned _customVideoHeight;
	unsigned _tilesPerFrame;

}

@property (assign,nonatomic) BOOL isSupported;                                             //@synthesize isSupported=_isSupported - In the implementation block
@property (assign,nonatomic) unsigned remoteSSRC;                                          //@synthesize remoteSSRC=_remoteSSRC - In the implementation block
@property (assign,nonatomic) BOOL isRTCPFBEnabled;                                         //@synthesize isRTCPFBEnabled=_isRTCPFBEnabled - In the implementation block
@property (nonatomic,readonly) VCVideoRuleCollections * videoRuleCollections;              //@synthesize videoRuleCollections=_videoRuleCollections - In the implementation block
@property (nonatomic,retain) NSDictionary * featureStrings;                                //@synthesize featureStrings=_featureStrings - In the implementation block
@property (nonatomic,retain) NSDictionary * parameterSets;                                 //@synthesize parameterSets=_parameterSets - In the implementation block
@property (assign,nonatomic) unsigned customVideoWidth;                                    //@synthesize customVideoWidth=_customVideoWidth - In the implementation block
@property (assign,nonatomic) unsigned customVideoHeight;                                   //@synthesize customVideoHeight=_customVideoHeight - In the implementation block
@property (assign,nonatomic) unsigned tilesPerFrame;                                       //@synthesize tilesPerFrame=_tilesPerFrame - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isSupported;
-(unsigned)tilesPerFrame;
-(unsigned)remoteSSRC;
-(VCVideoRuleCollections *)videoRuleCollections;
-(unsigned)customVideoWidth;
-(void)setCustomVideoWidth:(unsigned)arg1 ;
-(unsigned)customVideoHeight;
-(void)setCustomVideoHeight:(unsigned)arg1 ;
-(void)setRemoteSSRC:(unsigned)arg1 ;
-(void)setTilesPerFrame:(unsigned)arg1 ;
-(BOOL)isRTCPFBEnabled;
-(void)setIsRTCPFBEnabled:(BOOL)arg1 ;
-(void)setFeatureStrings:(NSDictionary *)arg1 ;
-(NSDictionary *)featureStrings;
-(void)addVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4 ;
-(void)addFeatureString:(id)arg1 key:(id)arg2 ;
-(void)addParameterSet:(id)arg1 key:(id)arg2 ;
-(void)setIsSupported:(BOOL)arg1 ;
-(NSDictionary *)parameterSets;
-(void)setParameterSets:(NSDictionary *)arg1 ;
@end

