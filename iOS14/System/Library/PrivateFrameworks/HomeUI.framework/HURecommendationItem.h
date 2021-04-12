/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HUTriggerLikeItem.h>

@class HMTrigger, NSString, HRERecommendation;

@interface HURecommendationItem : HFItem <HUTriggerLikeItem> {

	BOOL _selected;
	HRERecommendation* _recommendation;

}

@property (nonatomic,readonly) HMTrigger * trigger; 
@property (nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HRERecommendation * recommendation;              //@synthesize recommendation=_recommendation - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                 //@synthesize selected=_selected - In the implementation block
-(HMTrigger *)trigger;
-(BOOL)isSelected;
-(HRERecommendation *)recommendation;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)identifier;
-(id)initWithRecommendation:(id)arg1 ;
-(void)setRecommendation:(HRERecommendation *)arg1 ;
@end

