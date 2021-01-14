/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSAttributedString, NSString, NSDictionary;


@protocol PXLibrarySummaryOutputPresenter <NSObject>
@property (nonatomic,copy) NSAttributedString * attributedTitle; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) BOOL wantsDisclosureIndicator; 
@property (nonatomic,readonly) NSDictionary * defaultAttributes; 
@property (nonatomic,readonly) NSDictionary * emphasizedAttributes; 
@optional
-(NSAttributedString *)attributedTitle;
-(NSString *)subtitle;
-(void)setTitle:(id)arg1;
-(void)setAttributedTitle:(id)arg1;
-(BOOL)wantsDisclosureIndicator;
-(void)setWantsDisclosureIndicator:(BOOL)arg1;
-(NSDictionary *)defaultAttributes;
-(void)setSubtitle:(id)arg1;
-(NSDictionary *)emphasizedAttributes;
-(NSString *)title;

@end

