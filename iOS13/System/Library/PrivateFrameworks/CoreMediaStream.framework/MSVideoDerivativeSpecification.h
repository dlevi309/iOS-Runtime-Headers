/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)mediaAssetType;
-(double)bitRate;
-(NSString *)videoType;
-(BOOL)powerRequired;
-(BOOL)useCellular;
@end

