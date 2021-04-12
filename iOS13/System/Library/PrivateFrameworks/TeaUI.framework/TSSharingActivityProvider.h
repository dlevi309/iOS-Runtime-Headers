/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <libobjc.A.dylib/TSSharingActivityProviderType.h>

@class NSArray;

@interface TSSharingActivityProvider : NSObject <TSSharingActivityProviderType> {

	 activityItemSources;
	 activities;
	 excludedActivityTypes;
	 linkPresentationSource;

}

@property (copy,nonatomic) NSArray * activityItemSources; 
@property (copy,nonatomic) NSArray * activities; 
@property (copy,nonatomic) NSArray * excludedActivityTypes; 
@property (copy,nonatomic) id linkPresentationSource; 
@property (readonly,nonatomic) NSArray * activityItems; 
-(id)init;
-(NSArray *)activities;
-(void)setExcludedActivityTypes:(NSArray *)arg1 ;
-(void)setActivities:(NSArray *)arg1 ;
-(NSArray *)activityItems;
-(NSArray *)excludedActivityTypes;
-(NSArray *)activityItemSources;
-(id)linkPresentationSource;
-(void)setActivityItemSources:(NSArray *)arg1 ;
-(void)setLinkPresentationSource:(id)arg1 ;
-(id)initWithActivityItems:(id)arg1 activitySources:(id)arg2 excludedActivityTypes:(id)arg3 linkPresentationSource:(id)arg4 ;
@end

