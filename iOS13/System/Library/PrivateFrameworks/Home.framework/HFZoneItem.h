/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/NAIdentifiable.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>
#import <libobjc.A.dylib/HFItemDeletionProtocol.h>

@class HMZone, HMHome, NSString;

@interface HFZoneItem : HFItem <NAIdentifiable, HFHomeKitItemProtocol, HFItemDeletionProtocol> {

	HMZone* _zone;
	HMHome* _home;

}

@property (nonatomic,retain) HMHome * home;                                    //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMZone * zone;                                    //@synthesize zone=_zone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
+(id)na_identity;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(HMZone *)zone;
-(unsigned long long)hash;
-(NSString *)description;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)setZone:(HMZone *)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)hf_canDeleteItem;
-(id)hf_deleteItem;
-(id)initWithHome:(id)arg1 zone:(id)arg2 ;
@end

