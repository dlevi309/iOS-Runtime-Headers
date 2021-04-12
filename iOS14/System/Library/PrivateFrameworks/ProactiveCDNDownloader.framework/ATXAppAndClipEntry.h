/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveCDNDownloader.framework/ProactiveCDNDownloader
*/


#import <ProactiveCDNDownloader/ProactiveCDNDownloader-Structs.h>
@class NSString;

@interface ATXAppAndClipEntry : NSObject {

	BOOL _isTouristApp;
	unsigned long long _adamId;
	NSString* _urlHash;
	unsigned long long _radiusInMeters;
	unsigned long long _rank;
	CLLocationCoordinate2D _location;

}

@property (nonatomic,readonly) unsigned long long adamId;                      //@synthesize adamId=_adamId - In the implementation block
@property (nonatomic,copy,readonly) NSString * urlHash;                        //@synthesize urlHash=_urlHash - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D location;                //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long radiusInMeters;              //@synthesize radiusInMeters=_radiusInMeters - In the implementation block
@property (nonatomic,readonly) unsigned long long rank;                        //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) BOOL isTouristApp;                              //@synthesize isTouristApp=_isTouristApp - In the implementation block
-(id)init;
-(CLLocationCoordinate2D)location;
-(NSString *)urlHash;
-(id)initWithAdamId:(unsigned long long)arg1 urlHash:(id)arg2 location:(CLLocationCoordinate2D)arg3 radiusInMeters:(unsigned long long)arg4 rank:(unsigned long long)arg5 isTouristApp:(BOOL)arg6 ;
-(id)heroAppPredictionForLocation:(id)arg1 ;
-(unsigned long long)rank;
-(BOOL)isEqualToAppAndClipEntry:(id)arg1 ;
-(unsigned long long)radiusInMeters;
-(BOOL)isTouristApp;
-(unsigned long long)adamId;
-(BOOL)isEqual:(id)arg1 ;
@end

