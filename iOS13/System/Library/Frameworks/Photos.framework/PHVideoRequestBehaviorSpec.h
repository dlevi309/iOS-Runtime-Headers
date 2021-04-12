/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/PLVideoChoosingOptions.h>

@class NSString;

@interface PHVideoRequestBehaviorSpec : NSObject <PLVideoChoosingOptions> {

	BOOL _networkAccessAllowed;
	BOOL _streamingAllowed;
	BOOL _videoComplementAllowed;
	BOOL _mediumHighQualityAllowed;
	BOOL _restrictToPlayableOnCurrentDevice;
	long long _deliveryMode;
	long long _version;
	long long _streamingVideoIntent;

}

@property (assign,nonatomic) long long deliveryMode;                                                       //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (assign,nonatomic) long long version;                                                            //@synthesize version=_version - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;                      //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,getter=isStreamingAllowed,nonatomic) BOOL streamingAllowed;                              //@synthesize streamingAllowed=_streamingAllowed - In the implementation block
@property (assign,nonatomic) long long streamingVideoIntent;                                               //@synthesize streamingVideoIntent=_streamingVideoIntent - In the implementation block
@property (assign,getter=isVideoComplementAllowed,nonatomic) BOOL videoComplementAllowed;                  //@synthesize videoComplementAllowed=_videoComplementAllowed - In the implementation block
@property (assign,getter=isMediumHighQualityAllowed,nonatomic) BOOL mediumHighQualityAllowed;              //@synthesize mediumHighQualityAllowed=_mediumHighQualityAllowed - In the implementation block
@property (assign,nonatomic) BOOL restrictToPlayableOnCurrentDevice;                                       //@synthesize restrictToPlayableOnCurrentDevice=_restrictToPlayableOnCurrentDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(id)shortDescription;
-(BOOL)isNetworkAccessAllowed;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(long long)videoVersion;
-(BOOL)isStreamingAllowed;
-(BOOL)restrictToPlayableOnCurrentDevice;
-(BOOL)isMediumHighQualityAllowed;
-(long long)videoDeliveryMode;
-(id)plistDictionary;
-(id)initWithPlistDictionary:(id)arg1 ;
-(long long)deliveryMode;
-(void)setDeliveryMode:(long long)arg1 ;
-(void)setStreamingAllowed:(BOOL)arg1 ;
-(long long)streamingVideoIntent;
-(void)setStreamingVideoIntent:(long long)arg1 ;
-(BOOL)isVideoComplementAllowed;
-(void)setVideoComplementAllowed:(BOOL)arg1 ;
-(void)setMediumHighQualityAllowed:(BOOL)arg1 ;
-(void)setRestrictToPlayableOnCurrentDevice:(BOOL)arg1 ;
@end

