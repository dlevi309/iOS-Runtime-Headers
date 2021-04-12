/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)activityItems;
-(NSArray *)excludedActivityTypes;
-(NSArray *)activityItemSources;
-(id)linkPresentationSource;

@end

