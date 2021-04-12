/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSString, NSURL;

@interface SSItemMedia : NSObject {

	long long _duration;
	long long _fullDuration;
	long long _mediaFileSize;
	NSString* _mediaKind;
	BOOL _protected;
	NSURL* _url;

}

@property (nonatomic,readonly) long long fullDurationInMilliseconds;                     //@synthesize fullDuration=_fullDuration - In the implementation block
@property (nonatomic,readonly) long long mediaFileSize;                                  //@synthesize mediaFileSize=_mediaFileSize - In the implementation block
@property (nonatomic,copy) NSString * mediaKind;                                         //@synthesize mediaKind=_mediaKind - In the implementation block
@property (nonatomic,readonly) long long durationInMilliseconds;                         //@synthesize duration=_duration - In the implementation block
@property (getter=isProtectedMedia,nonatomic,readonly) BOOL protectedMedia;              //@synthesize protected=_protected - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                              //@synthesize url=_url - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)URL;
-(NSString *)mediaKind;
-(void)setMediaKind:(NSString *)arg1 ;
-(long long)fullDurationInMilliseconds;
-(long long)durationInMilliseconds;
-(id)initWithStoreOfferDictionary:(id)arg1 ;
-(long long)mediaFileSize;
-(BOOL)isProtectedMedia;
@end

