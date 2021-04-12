/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@protocol PKPlugIn;
@class NSString, NSBundle, IMBalloonApp, NSMutableDictionary, NSMutableArray;

@interface IMBalloonPlugin : NSObject {

	BOOL _pluginLoaded;
	NSString* _browserImageName;
	NSString* _browserImagePath;
	long long _browserGroup;
	NSBundle* _bundle;
	id<PKPlugIn> _plugin;
	IMBalloonApp* _app;
	NSMutableDictionary* _messageToDatasourceMap;
	NSMutableDictionary* _messageToBalloonControllerMap;
	Class _bubbleClass;
	Class _browserClass;
	Class _dataSourceClass;
	Class _customTypingIndicatorLayerClass;
	Class _entryClass;
	NSMutableArray* _balloonControllerPool;

}

@property (nonatomic,retain) NSBundle * bundle;                                                //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) id<PKPlugIn> plugin;                                              //@synthesize plugin=_plugin - In the implementation block
@property (assign,nonatomic) BOOL pluginLoaded;                                                //@synthesize pluginLoaded=_pluginLoaded - In the implementation block
@property (nonatomic,retain) IMBalloonApp * app;                                               //@synthesize app=_app - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * messageToDatasourceMap;                     //@synthesize messageToDatasourceMap=_messageToDatasourceMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * messageToBalloonControllerMap;              //@synthesize messageToBalloonControllerMap=_messageToBalloonControllerMap - In the implementation block
@property (nonatomic,retain) Class bubbleClass;                                                //@synthesize bubbleClass=_bubbleClass - In the implementation block
@property (nonatomic,retain) Class browserClass;                                               //@synthesize browserClass=_browserClass - In the implementation block
@property (nonatomic,retain) Class dataSourceClass;                                            //@synthesize dataSourceClass=_dataSourceClass - In the implementation block
@property (nonatomic,retain) Class customTypingIndicatorLayerClass;                            //@synthesize customTypingIndicatorLayerClass=_customTypingIndicatorLayerClass - In the implementation block
@property (nonatomic,retain) Class entryClass;                                                 //@synthesize entryClass=_entryClass - In the implementation block
@property (nonatomic,retain) NSString * browserImageName;                                      //@synthesize browserImageName=_browserImageName - In the implementation block
@property (nonatomic,retain) NSString * browserImagePath;                                      //@synthesize browserImagePath=_browserImagePath - In the implementation block
@property (assign,nonatomic) long long browserGroup;                                           //@synthesize browserGroup=_browserGroup - In the implementation block
@property (nonatomic,retain) NSMutableArray * balloonControllerPool;                           //@synthesize balloonControllerPool=_balloonControllerPool - In the implementation block
@property (nonatomic,retain,readonly) NSString * identifier; 
@property (nonatomic,retain,readonly) NSString * browserDisplayName; 
@property (nonatomic,retain,readonly) NSBundle * pluginBundle; 
@property (nonatomic,retain,readonly) NSBundle * appBundle; 
@property (nonatomic,readonly) BOOL showInBrowser; 
@property (nonatomic,readonly) BOOL showableInBrowser; 
@property (nonatomic,readonly) BOOL isEnabled; 
@property (nonatomic,readonly) BOOL shouldHideAppSwitcher; 
@property (nonatomic,readonly) unsigned long long presentationContexts; 
@property (nonatomic,readonly) NSString * version; 
@property (getter=isBetaPlugin,nonatomic,readonly) BOOL betaPlugin; 
-(id)description;
-(id)_adamID;
-(id)iconCache;
-(id)__ck_statusImage;
-(id)__ck_badgeImage;
-(id)__ck_statusJPEGImageDataForTransportWithCompressionFactor:(double)arg1 ;
-(id)__ck_breadcrumbImage;
-(void)__ck_prefetchBrowserImageForInterfaceStyle:(long long)arg1 ;
-(id)__ck_browserImageForInterfaceStyle:(long long)arg1 ;
-(id)__ck_browserImageGenerateSynchronously:(BOOL)arg1 interfaceStyle:(long long)arg2 ;
-(id)__ck_browserImageName:(BOOL*)arg1 ;
-(id)appStoreBadgeIcon;
-(id)recentsBadgeIcon;
-(id)_scaledImage:(id)arg1 xscale:(double)arg2 yscale:(double)arg3 ;
-(id)__ck_statusImageForTransport;
-(id)__ck_attributionInfo;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)version;
-(id)initWithBundle:(id)arg1 ;
-(NSBundle *)bundle;
-(BOOL)isEnabled;
-(void)setBundle:(NSBundle *)arg1 ;
-(id<PKPlugIn>)plugin;
-(void)setPlugin:(id<PKPlugIn>)arg1 ;
-(void)setDataSourceClass:(Class)arg1 ;
-(Class)dataSourceClass;
-(IMBalloonApp *)app;
-(void)setApp:(IMBalloonApp *)arg1 ;
-(NSString *)browserDisplayName;
-(Class)customTypingIndicatorLayerClass;
-(Class)bubbleClass;
-(BOOL)shouldHideAppSwitcher;
-(BOOL)showInBrowser;
-(unsigned long long)presentationContexts;
-(Class)browserClass;
-(NSString *)browserImageName;
-(NSBundle *)appBundle;
-(NSBundle *)pluginBundle;
-(id)balloonControllerForChatItem:(id)arg1 ;
-(BOOL)isBetaPlugin;
-(BOOL)showableInBrowser;
-(id)existingBalloonControllerWithMessageGUID:(id)arg1 ;
-(BOOL)shouldShowForRecipients:(id)arg1 ;
-(void)insertDataSource:(id)arg1 forGUID:(id)arg2 ;
-(BOOL)supportsControllerReuse;
-(id)dataSourceForPluginPayload:(id)arg1 ;
-(id)initWithBundle:(id)arg1 app:(id)arg2 ;
-(void)setPluginLoaded:(BOOL)arg1 ;
-(void)setBrowserGroup:(long long)arg1 ;
-(void)setBrowserImageName:(NSString *)arg1 ;
-(void)setBrowserImagePath:(NSString *)arg1 ;
-(void)unloadBundle;
-(void)setBubbleClass:(Class)arg1 ;
-(void)setBrowserClass:(Class)arg1 ;
-(void)setCustomTypingIndicatorLayerClass:(Class)arg1 ;
-(void)setEntryClass:(Class)arg1 ;
-(id)_getControllerFromReusePoolForChatItem:(id)arg1 ;
-(NSMutableDictionary *)messageToDatasourceMap;
-(BOOL)isStickerPackOnly;
-(Class)entryClass;
-(BOOL)pluginLoaded;
-(void)moveController:(id)arg1 toReusePoolFromChatItem:(id)arg2 ;
-(void)removeController:(id)arg1 forChatItem:(id)arg2 ;
-(id)existingDataSourceForMessageGUID:(id)arg1 ;
-(NSString *)browserImagePath;
-(long long)browserGroup;
-(void)setMessageToDatasourceMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)messageToBalloonControllerMap;
-(void)setMessageToBalloonControllerMap:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)balloonControllerPool;
-(void)setBalloonControllerPool:(NSMutableArray *)arg1 ;
@end

