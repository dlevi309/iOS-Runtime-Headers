/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@protocol SSRAssetManagerDelegate, OS_dispatch_queue;
@class NSArray, NSString, NSObject;

@interface SSRAssetManager : NSObject {

	id<SSRAssetManagerDelegate> _delegate;
	NSArray* _assetProviders;
	NSString* _currentLanguageCode;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSArray * assetProviders;                                 //@synthesize assetProviders=_assetProviders - In the implementation block
@property (nonatomic,retain) NSString * currentLanguageCode;                           //@synthesize currentLanguageCode=_currentLanguageCode - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<SSRAssetManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
-(id)init;
-(id<SSRAssetManagerDelegate>)delegate;
-(void)setDelegate:(id<SSRAssetManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)currentLanguageCode;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCurrentLanguageCode:(NSString *)arg1 ;
-(id)installedAssetOfType:(unsigned long long)arg1 forLanguage:(id)arg2 ;
-(id)allInstalledAssetsOfType:(unsigned long long)arg1 forLanguage:(id)arg2 ;
-(id)_latestVersionedAssetOfType:(unsigned long long)arg1 fromProviders:(id)arg2 forLocale:(id)arg3 ;
-(float)_convertVersionStringToFloat:(id)arg1 ;
-(NSArray *)assetProviders;
-(void)setAssetProviders:(NSArray *)arg1 ;
@end

