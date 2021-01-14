/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

@class NSArray;


@protocol TSSharingActivityProviderType
@property (readonly,nonatomic) NSArray * activityItemSources; 
@property (readonly,nonatomic) NSArray * activities; 
@property (readonly,nonatomic) NSArray * activityItems; 
@property (readonly,nonatomic) NSArray * excludedActivityTypes; 
@property (readonly,nonatomic) id linkPresentationSource; 
@required
-(NSArray *)activities;
-(NSArray *)activityItemSources;
-(NSArray *)activityItems;
-(id)linkPresentationSource;
-(NSArray *)excludedActivityTypes;

@end

