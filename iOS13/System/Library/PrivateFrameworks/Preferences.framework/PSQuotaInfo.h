/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSMutableDictionary;

@interface PSQuotaInfo : NSObject {

	NSMutableDictionary* _mediaKindDict;
	unsigned long long _totalStorage;
	unsigned long long _usedStorage;

}

@property (assign,nonatomic) unsigned long long totalStorage;              //@synthesize totalStorage=_totalStorage - In the implementation block
@property (assign,nonatomic) unsigned long long usedStorage;               //@synthesize usedStorage=_usedStorage - In the implementation block
-(id)init;
-(void)setStorageInUse:(unsigned long long)arg1 forMediaKind:(long long)arg2 ;
-(unsigned long long)storageInUseForMediaKind:(long long)arg1 ;
-(unsigned long long)totalStorage;
-(void)setTotalStorage:(unsigned long long)arg1 ;
-(unsigned long long)usedStorage;
-(void)setUsedStorage:(unsigned long long)arg1 ;
@end

