/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString;

@interface MPAVAuxiliaryDevice : NSObject {

	BOOL _playing;
	NSString* _uniqueID;
	NSString* _productName;
	NSString* _deviceName;
	NSString* _modelIdentifier;

}

@property (nonatomic,readonly) NSString * uniqueID;                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSString * productName;                     //@synthesize productName=_productName - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                      //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * modelIdentifier;                 //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing;              //@synthesize playing=_playing - In the implementation block
+(id)otherConnectedDevicesFromRouteDescription:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)uniqueID;
-(NSString *)modelIdentifier;
-(NSString *)deviceName;
-(BOOL)isPlaying;
-(NSString *)productName;
@end

