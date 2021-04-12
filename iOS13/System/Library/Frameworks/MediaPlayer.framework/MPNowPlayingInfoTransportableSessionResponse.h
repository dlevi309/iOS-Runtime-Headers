/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_init;
-(NSData *)data;
-(NSString *)identifier;
-(NSString *)sessionType;
@end

