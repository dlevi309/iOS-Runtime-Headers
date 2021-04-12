/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UICopyConfigurationReading.h>

@class NSArray, NSString;

@interface _UICopyConfiguration : NSObject <_UICopyConfigurationReading> {

	NSArray* _itemProviders;
	BOOL _allowsSharing;
	id _localObject;
	/*^block*/id _metadataProvider;
	/*^block*/id _previewProvider;
	/*^block*/id _activityItemsProvider;
	/*^block*/id _applicationActivitiesProvider;

}

@property (nonatomic,retain) id localObject;                                                                   //@synthesize localObject=_localObject - In the implementation block
@property (assign,nonatomic) BOOL allowsSharing;                                                               //@synthesize allowsSharing=_allowsSharing - In the implementation block
@property (nonatomic,copy) id metadataProvider;                                                                //@synthesize metadataProvider=_metadataProvider - In the implementation block
@property (nonatomic,copy) id previewProvider;                                                                 //@synthesize previewProvider=_previewProvider - In the implementation block
@property (nonatomic,copy) id activityItemsProvider;                                                           //@synthesize activityItemsProvider=_activityItemsProvider - In the implementation block
@property (nonatomic,copy) id applicationActivitiesProvider;                                                   //@synthesize applicationActivitiesProvider=_applicationActivitiesProvider - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemProvidersForSharing; 
@property (nonatomic,copy,readonly) NSArray * activityItemsForSharing; 
@property (nonatomic,copy,readonly) NSArray * applicationActivitiesForSharing; 
@property (nonatomic,copy,readonly) NSArray * itemProvidersForActivityItemsConfiguration; 
@property (nonatomic,copy,readonly) NSArray * applicationActivitiesForActivityItemsConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)copyConfigurationWithSharedObjects:(id)arg1 ;
+(id)copyConfigurationWithItemProviders:(id)arg1 ;
-(id)localObject;
-(NSArray *)itemProvidersForActivityItemsConfiguration;
-(BOOL)allowsSharing;
-(id)initWithSharedObjects:(id)arg1 ;
-(id)activityItemsProvider;
-(NSArray *)itemProvidersForSharing;
-(id)sharingMetadataForKey:(id)arg1 ;
-(NSArray *)applicationActivitiesForSharing;
-(id)previewForSharedItemProviderAtIndex:(long long)arg1 intent:(id)arg2 ;
-(void)setAllowsSharing:(BOOL)arg1 ;
-(void)setActivityItemsProvider:(id)arg1 ;
-(void)setApplicationActivitiesProvider:(id)arg1 ;
-(id)applicationActivitiesProvider;
-(id)itemProviders;
-(id)previewProvider;
-(id)metadataProvider;
-(void)setLocalObject:(id)arg1 ;
-(void)setMetadataProvider:(id)arg1 ;
-(void)setPreviewProvider:(id)arg1 ;
-(NSArray *)activityItemsForSharing;
-(id)initWithItemProviders:(id)arg1 ;
@end

