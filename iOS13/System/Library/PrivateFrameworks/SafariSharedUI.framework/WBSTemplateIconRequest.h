/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSSiteMetadataRequest.h>

@class NSString, WBSTemplateIconMonogramConfiguration, UIColor;

@interface WBSTemplateIconRequest : WBSSiteMetadataRequest

@property (nonatomic,copy,readonly) NSString * monogramTitle; 
@property (nonatomic,readonly) WBSTemplateIconMonogramConfiguration * monogramConfiguration; 
@property (nonatomic,readonly) UIColor * overrideForegroundColor; 
@property (nonatomic,readonly) BOOL saveToDisk; 
-(BOOL)saveToDisk;
-(id)initWithURL:(id)arg1 extraInfo:(id)arg2 ;
-(NSString *)monogramTitle;
-(UIColor *)overrideForegroundColor;
-(WBSTemplateIconMonogramConfiguration *)monogramConfiguration;
-(id)initWithURL:(id)arg1 title:(id)arg2 monogramConfiguration:(id)arg3 overrideForegroundColor:(id)arg4 saveToDisk:(BOOL)arg5 ;
@end

