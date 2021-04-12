/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/


@class NSString, NSArray;

@interface STStoragePlugin : NSObject {

	NSString* _identifier;
	NSArray* _tips;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * tips;                     //@synthesize tips=_tips - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setTips:(NSArray *)arg1 ;
-(id)documentAppIdentifiers;
-(id)documentSpecifiersForApp:(id)arg1 ;
-(id)externDataSizeAppIdentifiers;
-(long long)externDataSizeForApp:(id)arg1 ;
-(NSArray *)tips;
-(void)notifyUsageChanged;
-(void)reloadTips;
@end

