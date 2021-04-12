/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString;

@interface MPAVOutputDeviceDescription : NSObject {

	long long _routeType;
	long long _routeSubtype;
	NSString* _uid;

}

@property (nonatomic,readonly) long long routeType;                 //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) long long routeSubtype;              //@synthesize routeSubtype=_routeSubtype - In the implementation block
@property (nonatomic,readonly) NSString * uid;                      //@synthesize uid=_uid - In the implementation block
-(NSString *)uid;
-(long long)routeType;
-(long long)routeSubtype;
-(unsigned long long)hash;
-(id)initWithDeviceType:(long long)arg1 deviceSubtype:(long long)arg2 uid:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

