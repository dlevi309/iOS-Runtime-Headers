/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface TLToneStoreDownload : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	NSString* _name;
	NSString* _albumTitle;
	NSString* _artistName;
	double _duration;
	NSString* _genreName;
	BOOL _isRingtone;
	unsigned long long _storeItemIdentifier;
	float _downloadProgress;
	NSString* _toneIdentifier;
	NSString* _identifier;

}

@property (setter=_setName:,nonatomic,copy) NSString * name; 
@property (setter=_setAlbumTitle:,nonatomic,copy) NSString * albumTitle; 
@property (setter=_setArtistName:,nonatomic,copy) NSString * artistName; 
@property (assign,setter=_setDuration:,nonatomic) double duration; 
@property (setter=_setGenreName:,nonatomic,copy) NSString * genreName; 
@property (assign,setter=_setRingtone:,getter=isRingtone,nonatomic) BOOL ringtone; 
@property (assign,setter=_setStoreItemIdentifier:,nonatomic) unsigned long long storeItemIdentifier; 
@property (assign,setter=_setDownloadProgress:,nonatomic) float downloadProgress; 
@property (setter=_setToneIdentifier:,nonatomic,copy) NSString * toneIdentifier; 
@property (nonatomic,readonly) NSString * identifier;                                                             //@synthesize identifier=_identifier - In the implementation block
-(void)_setName:(id)arg1 ;
-(id)init;
-(NSString *)toneIdentifier;
-(NSString *)artistName;
-(float)downloadProgress;
-(NSString *)name;
-(void)_setArtistName:(id)arg1 ;
-(void)_setStoreItemIdentifier:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)storeItemIdentifier;
-(void)_setDuration:(double)arg1 ;
-(NSString *)albumTitle;
-(unsigned long long)hash;
-(NSString *)genreName;
-(NSString *)identifier;
-(double)duration;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)isRingtone;
-(void)_setDownloadProgress:(float)arg1 ;
-(void)_setAlbumTitle:(id)arg1 ;
-(void)_setGenreName:(id)arg1 ;
-(void)_setRingtone:(BOOL)arg1 ;
-(void)_setToneIdentifier:(id)arg1 ;
@end

