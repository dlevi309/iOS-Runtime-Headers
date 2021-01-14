/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@class NSString;

@interface MSVideoDerivativeSpecification : NSObject {

	BOOL _useCellular;
	BOOL _powerRequired;
	double _bitRate;
	NSString* _videoType;
	unsigned long long _mediaAssetType;

}

@property (nonatomic,readonly) BOOL useCellular;                               //@synthesize useCellular=_useCellular - In the implementation block
@property (nonatomic,readonly) BOOL powerRequired;                             //@synthesize powerRequired=_powerRequired - In the implementation block
@property (nonatomic,readonly) double bitRate;                                 //@synthesize bitRate=_bitRate - In the implementation block
@property (nonatomic,readonly) NSString * videoType;                           //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaAssetType;              //@synthesize mediaAssetType=_mediaAssetType - In the implementation block
+(id)videoDerivativeSpecificationsWithDictionaryArray:(id)arg1 ;
-(NSString *)videoType;
-(id)initWithDictionary:(id)arg1 ;
-(double)bitRate;
-(BOOL)useCellular;
-(unsigned long long)mediaAssetType;
-(BOOL)powerRequired;
@end

