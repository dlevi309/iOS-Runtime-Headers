/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/


@class NSString, NSArray;

@interface STStoragePlugin : NSObject {

	NSString* _identifier;
	NSArray* _tips;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * tips;                     //@synthesize tips=_tips - In the implementation block
-(id)documentAppIdentifiers;
-(id)documentSpecifiersForApp:(id)arg1 ;
-(id)externDataSizeAppIdentifiers;
-(long long)externDataSizeForApp:(id)arg1 ;
-(NSArray *)tips;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setTips:(NSArray *)arg1 ;
-(NSString *)identifier;
-(void)notifyUsageChanged;
-(void)reloadTips;
@end

