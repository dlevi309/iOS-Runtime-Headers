/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSNumber *)identifier;
-(unsigned long long)size;
-(BOOL)isManuallyAdded;
-(id)initWithIdentifier:(id)arg1 size:(unsigned long long)arg2 manuallyAdded:(BOOL)arg3 ;
@end

