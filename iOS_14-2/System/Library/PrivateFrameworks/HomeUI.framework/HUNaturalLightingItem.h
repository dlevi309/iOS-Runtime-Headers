/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFTransformItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>
#import <libobjc.A.dylib/HFRoomContextProviding.h>

@class HMRoom, NSSet, NSString;

@interface HUNaturalLightingItem : HFTransformItem <HFHomeKitItemProtocol, HFRoomContextProviding> {

	BOOL _selected;

}

@property (assign,nonatomic) BOOL selected;                                    //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) NSSet * lightProfiles; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HMRoom * hf_parentRoom; 
-(id)accessory;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(HMRoom *)hf_parentRoom;
-(NSSet *)lightProfiles;
-(id)initWithSourceItem:(id)arg1 defaultSelected:(BOOL)arg2 ;
@end

