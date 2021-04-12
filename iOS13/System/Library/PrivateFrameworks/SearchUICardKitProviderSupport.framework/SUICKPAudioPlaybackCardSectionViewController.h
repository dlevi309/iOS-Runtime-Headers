/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
*/

#import <SearchUICardKitProviderSupport/SUICKPInteractiveCardSectionViewController.h>
#import <libobjc.A.dylib/SFFeedbackListener.h>
#import <libobjc.A.dylib/CRKEventResponding.h>

@class SFAudioPlaybackCardSection, NSString;

@interface SUICKPAudioPlaybackCardSectionViewController : SUICKPInteractiveCardSectionViewController <SFFeedbackListener, CRKEventResponding>

@property (nonatomic,retain) SFAudioPlaybackCardSection * cardSection; 
@property (nonatomic,retain) UIView*<SearchUICardSectionViewUpdatable> view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cardSectionClasses;
-(void)didEngageCardSection:(id)arg1 ;
-(void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)_performCommands:(id)arg1 applyingUserInfo:(id)arg2 ;
@end

