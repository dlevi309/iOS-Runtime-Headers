/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)activities;
-(void)setActivityItemSources:(NSArray *)arg1 ;
-(void)setActivities:(NSArray *)arg1 ;
-(id)init;
-(void)setExcludedActivityTypes:(NSArray *)arg1 ;
-(NSArray *)activityItemSources;
-(id)initWithActivityItems:(id)arg1 activitySources:(id)arg2 excludedActivityTypes:(id)arg3 linkPresentationSource:(id)arg4 ;
-(NSArray *)activityItems;
-(id)linkPresentationSource;
-(void)setLinkPresentationSource:(id)arg1 ;
-(NSArray *)excludedActivityTypes;
@end

