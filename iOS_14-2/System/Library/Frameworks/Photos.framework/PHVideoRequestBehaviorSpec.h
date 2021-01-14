/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PLVideoChoosingOptions.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PHVideoRequestBehaviorSpec : NSObject <PLVideoChoosingOptions, NSSecureCoding, NSCopying> {

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
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(long long)videoVersion;
-(BOOL)restrictToPlayableOnCurrentDevice;
-(long long)videoDeliveryMode;
-(BOOL)isMediumHighQualityAllowed;
-(BOOL)isStreamingAllowed;
-(void)setStreamingAllowed:(BOOL)arg1 ;
-(long long)streamingVideoIntent;
-(void)setStreamingVideoIntent:(long long)arg1 ;
-(BOOL)isVideoComplementAllowed;
-(void)setVideoComplementAllowed:(BOOL)arg1 ;
-(void)setMediumHighQualityAllowed:(BOOL)arg1 ;
-(void)setRestrictToPlayableOnCurrentDevice:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isNetworkAccessAllowed;
-(void)setVersion:(long long)arg1 ;
-(long long)deliveryMode;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeliveryMode:(long long)arg1 ;
@end

