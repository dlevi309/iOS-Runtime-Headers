/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@protocol HFMediaProfileContainer, HUHomeTheaterAudioItemModuleDelegate;
@class NSSet, NSString, HFItem;

@interface HUHomeTheaterAudioItemModule : HFItemModule {

	BOOL _includeLocalDestinations;
	BOOL _disableAutomaticCommit;
	NSSet* _itemProviders;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	id<HUHomeTheaterAudioItemModuleDelegate> _delegate;
	NSString* _tappedDestinationIdentifier;
	HFItem* _selectedUncommittedItem;

}

@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;                   //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (assign,nonatomic,__weak) id<HUHomeTheaterAudioItemModuleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * tappedDestinationIdentifier;                                //@synthesize tappedDestinationIdentifier=_tappedDestinationIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) HFItem * selectedUncommittedItem;                             //@synthesize selectedUncommittedItem=_selectedUncommittedItem - In the implementation block
@property (nonatomic,readonly) BOOL includeLocalDestinations;                                       //@synthesize includeLocalDestinations=_includeLocalDestinations - In the implementation block
@property (assign,nonatomic) BOOL disableAutomaticCommit;                                           //@synthesize disableAutomaticCommit=_disableAutomaticCommit - In the implementation block
-(id<HUHomeTheaterAudioItemModuleDelegate>)delegate;
-(id)commitConfiguration;
-(void)setDelegate:(id<HUHomeTheaterAudioItemModuleDelegate>)arg1 ;
-(id)itemProviders;
-(void)selectItem:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(void)_createItemProviders;
-(id)initWithItemUpdater:(id)arg1 mediaProfileContainer:(id)arg2 includeLocalDestinations:(BOOL)arg3 ;
-(BOOL)includeLocalDestinations;
-(HFItem *)selectedUncommittedItem;
-(id)_updateDestinationToIdentifier:(id)arg1 ;
-(BOOL)disableAutomaticCommit;
-(void)setTappedDestinationIdentifier:(NSString *)arg1 ;
-(NSString *)tappedDestinationIdentifier;
-(void)setDisableAutomaticCommit:(BOOL)arg1 ;
@end

