/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSNumber;

@interface NMSMediaItemDownloadInfo : NSObject {

	BOOL _manuallyAdded;
	NSNumber* _identifier;
	unsigned long long _size;

}

@property (nonatomic,readonly) NSNumber * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                                //@synthesize size=_size - In the implementation block
@property (getter=isManuallyAdded,nonatomic,readonly) BOOL manuallyAdded;              //@synthesize manuallyAdded=_manuallyAdded - In the implementation block
-(unsigned long long)size;
-(id)description;
-(NSNumber *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isManuallyAdded;
-(id)initWithIdentifier:(id)arg1 size:(unsigned long long)arg2 manuallyAdded:(BOOL)arg3 ;
@end

