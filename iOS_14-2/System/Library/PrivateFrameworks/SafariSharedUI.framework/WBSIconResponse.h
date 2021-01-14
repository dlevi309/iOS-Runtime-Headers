/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

@class UIImage, UIColor;


@protocol WBSIconResponse <NSObject>
@property (nonatomic,readonly) UIImage * icon; 
@property (getter=isGenerated,nonatomic,readonly) BOOL generated; 
@property (nonatomic,readonly) UIColor * extractedBackgroundColor; 
@optional
-(UIColor *)extractedBackgroundColor;
-(BOOL)isGenerated;

@required
-(UIImage *)icon;

@end

