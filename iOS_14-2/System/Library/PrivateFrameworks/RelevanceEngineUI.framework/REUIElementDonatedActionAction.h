/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <RelevanceEngine/REElementAction.h>
#import <libobjc.A.dylib/REUISiriActionsPerformerDelegate.h>

@class REUISiriActionsPerformer, REUIDonatedElementProperties, NSString, UIImage;

@interface REUIElementDonatedActionAction : REElementAction <REUISiriActionsPerformerDelegate> {

	REUISiriActionsPerformer* _performer;
	REUIDonatedElementProperties* _properties;

}

@property (nonatomic,retain) REUISiriActionsPerformer * performer;                                    //@synthesize performer=_performer - In the implementation block
@property (nonatomic,retain) REUIDonatedElementProperties * properties;                               //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * appName; 
@property (nonatomic,readonly) UIImage * appIcon; 
@property (assign,nonatomic,__weak) id<REUIElementDonatedActionActionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProperties:(id)arg1 ;
-(REUIDonatedElementProperties *)properties;
-(NSString *)bundleIdentifier;
-(void)setPerformer:(REUISiriActionsPerformer *)arg1 ;
-(REUISiriActionsPerformer *)performer;
-(void)setProperties:(REUIDonatedElementProperties *)arg1 ;
-(NSString *)appName;
-(UIImage *)appIcon;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)_performWithContext:(id)arg1 ;
-(id)fullsizeAppIcon;
-(id)siriActionsPerformerWantsAlertBackgroundImage:(id)arg1 ;
-(id)siriActionsPerformerWantsBackgroundViewToBlur:(id)arg1 ;
-(BOOL)siriActionsPerformer:(id)arg1 wantsToPresentViewController:(id)arg2 ;
-(void)siriActionsPerformerWantsToSuppressDismissal:(id)arg1 ;
-(BOOL)siriActionsPerformer:(id)arg1 wantsToDismissViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)siriActionsPerformerDidSucceed:(id)arg1 ;
-(void)siriActionsPerformer:(id)arg1 didFailWithError:(id)arg2 ;
-(id)_newPerformer;
@end

