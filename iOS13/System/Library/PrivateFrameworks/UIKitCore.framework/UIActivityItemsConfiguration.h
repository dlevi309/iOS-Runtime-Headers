/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIActivityItemsConfigurationReading.h>

@class NSArray, UIActivityViewController, NSString;

@interface UIActivityItemsConfiguration : NSObject <UIActivityItemsConfigurationReading> {

	NSArray* _itemProviders;
	NSArray* _activityItems;
	UIActivityViewController* _vc;
	NSArray* _excludedActivityTypes;
	id _localObject;
	NSArray* _supportedInteractions;
	/*^block*/id _metadataProvider;
	/*^block*/id _perItemMetadataProvider;
	/*^block*/id _previewProvider;
	/*^block*/id _applicationActivitiesProvider;

}

@property (nonatomic,readonly) BOOL _hasItemsForActivityItemsConfiguration; 
@property (nonatomic,copy,readonly) NSArray * _activityItems; 
@property (setter=_setExcludedActivityTypes:,nonatomic,copy) NSArray * _excludedActivityTypes; 
@property (nonatomic,retain) id localObject;                                                                   //@synthesize localObject=_localObject - In the implementation block
@property (nonatomic,copy) NSArray * supportedInteractions;                                                    //@synthesize supportedInteractions=_supportedInteractions - In the implementation block
@property (nonatomic,copy) id metadataProvider;                                                                //@synthesize metadataProvider=_metadataProvider - In the implementation block
@property (nonatomic,copy) id perItemMetadataProvider;                                                         //@synthesize perItemMetadataProvider=_perItemMetadataProvider - In the implementation block
@property (nonatomic,copy) id previewProvider;                                                                 //@synthesize previewProvider=_previewProvider - In the implementation block
@property (nonatomic,copy) id applicationActivitiesProvider;                                                   //@synthesize applicationActivitiesProvider=_applicationActivitiesProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * itemProvidersForActivityItemsConfiguration; 
@property (nonatomic,copy,readonly) NSArray * applicationActivitiesForActivityItemsConfiguration; 
+(id)activityItemsConfigurationWithObjects:(id)arg1 ;
+(id)activityItemsConfigurationWithItemProviders:(id)arg1 ;
+(id)_itemsForSystemSharingFromActivityItemsConfiguration:(id)arg1 wrapperBlock:(/*^block*/id)arg2 ;
-(id)initWithObjects:(id)arg1 ;
-(void)_commonInit;
-(id)initWithItemProviders:(id)arg1 ;
-(NSArray *)supportedInteractions;
-(id)applicationActivitiesProvider;
-(id)activityItemsConfigurationMetadataForKey:(id)arg1 ;
-(id)activityItemsConfigurationMetadataForItemAtIndex:(long long)arg1 key:(id)arg2 ;
-(NSArray *)itemProvidersForActivityItemsConfiguration;
-(BOOL)activityItemsConfigurationSupportsInteraction:(id)arg1 ;
-(id)activityItemsConfigurationPreviewForItemAtIndex:(long long)arg1 intent:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(NSArray *)applicationActivitiesForActivityItemsConfiguration;
-(id)_initWithActivityItemSources:(id)arg1 ;
-(id)_initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(id)itemProviders;
-(id)activityItemsForSharing;
-(BOOL)_hasItemsForActivityItemsConfiguration;
-(NSArray *)_activityItems;
-(NSArray *)_excludedActivityTypes;
-(void)_setExcludedActivityTypes:(id)arg1 ;
-(id)localObject;
-(void)setLocalObject:(id)arg1 ;
-(void)setSupportedInteractions:(NSArray *)arg1 ;
-(id)metadataProvider;
-(void)setMetadataProvider:(id)arg1 ;
-(id)perItemMetadataProvider;
-(void)setPerItemMetadataProvider:(id)arg1 ;
-(id)previewProvider;
-(void)setPreviewProvider:(id)arg1 ;
-(void)setApplicationActivitiesProvider:(id)arg1 ;
@end

