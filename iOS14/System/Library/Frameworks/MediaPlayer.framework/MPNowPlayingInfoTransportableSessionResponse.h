/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString, NSData;

@interface MPNowPlayingInfoTransportableSessionResponse : NSObject {

	NSString* _identifier;
	NSString* _sessionType;
	NSData* _data;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * sessionType;              //@synthesize sessionType=_sessionType - In the implementation block
@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
+(id)responseWithIdentifier:(id)arg1 sessionType:(id)arg2 data:(id)arg3 ;
-(NSString *)sessionType;
-(NSData *)data;
-(id)_init;
-(NSString *)identifier;
@end

