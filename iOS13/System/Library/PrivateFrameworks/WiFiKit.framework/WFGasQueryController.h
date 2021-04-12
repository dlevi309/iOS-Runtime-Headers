/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol WFGasQueryControllerDelegate;
@class NSSet, NSMapTable, NSMutableSet, WFInterface;

@interface WFGasQueryController : NSObject {

	id<WFGasQueryControllerDelegate> _delegate;
	NSSet* _profiles;
	NSMapTable* _gasResponseCache;
	NSMutableSet* _resolvedNetworks;
	WFInterface* _interface;

}

@property (nonatomic,retain) NSMapTable * gasResponseCache;                                 //@synthesize gasResponseCache=_gasResponseCache - In the implementation block
@property (nonatomic,retain) NSMutableSet * resolvedNetworks;                               //@synthesize resolvedNetworks=_resolvedNetworks - In the implementation block
@property (nonatomic,retain) WFInterface * interface;                                       //@synthesize interface=_interface - In the implementation block
@property (assign,nonatomic,__weak) id<WFGasQueryControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * profiles;                                            //@synthesize profiles=_profiles - In the implementation block
-(id)init;
-(id<WFGasQueryControllerDelegate>)delegate;
-(void)setDelegate:(id<WFGasQueryControllerDelegate>)arg1 ;
-(WFInterface *)interface;
-(void)setInterface:(WFInterface *)arg1 ;
-(id)initWithInterface:(id)arg1 ;
-(NSSet *)profiles;
-(void)removeAllProfiles;
-(void)resolveProfilesForNetworks:(id)arg1 ;
-(id)profileForNetwork:(id)arg1 ;
-(void)resolveProfileForNetwork:(id)arg1 handler:(/*^block*/id)arg2 force:(BOOL)arg3 ;
-(void)removeProfileForNetwork:(id)arg1 ;
-(NSMapTable *)gasResponseCache;
-(NSMutableSet *)resolvedNetworks;
-(void)_processANQPResults:(id)arg1 scanRecords:(id)arg2 error:(id)arg3 ;
-(id)_existingProfileForANQPResult:(id)arg1 ;
-(void)setGasResponseCache:(NSMapTable *)arg1 ;
-(void)setResolvedNetworks:(NSMutableSet *)arg1 ;
@end

