/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * itemProvidersForActivityItemsConfiguration; 
@property (nonatomic,copy,readonly) NSArray * applicationActivitiesForActivityItemsConfiguration; 
@property (nonatomic,copy,readonly) NSArray * itemProvidersForSharing; 
@property (nonatomic,copy,readonly) NSArray * activityItemsForSharing; 
@property (nonatomic,copy,readonly) NSArray * applicationActivitiesForSharing; 
+(id)copyConfigurationWithSharedObjects:(id)arg1 ;
+(id)copyConfigurationWithItemProviders:(id)arg1 ;
-(id)initWithItemProviders:(id)arg1 ;
-(id)applicationActivitiesProvider;
-(NSArray *)itemProvidersForActivityItemsConfiguration;
-(id)itemProviders;
-(NSArray *)activityItemsForSharing;
-(id)localObject;
-(void)setLocalObject:(id)arg1 ;
-(id)metadataProvider;
-(void)setMetadataProvider:(id)arg1 ;
-(id)previewProvider;
-(void)setPreviewProvider:(id)arg1 ;
-(void)setApplicationActivitiesProvider:(id)arg1 ;
-(id)initWithSharedObjects:(id)arg1 ;
-(id)activityItemsProvider;
-(NSArray *)itemProvidersForSharing;
-(id)sharingMetadataForKey:(id)arg1 ;
-(id)previewForSharedItemProviderAtIndex:(long long)arg1 intent:(id)arg2 ;
-(BOOL)allowsSharing;
-(NSArray *)applicationActivitiesForSharing;
-(void)setAllowsSharing:(BOOL)arg1 ;
-(void)setActivityItemsProvider:(id)arg1 ;
@end

