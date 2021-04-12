/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

@class UIImage, UIColor;


@protocol WBSIconResponse <NSObject>
@property (nonatomic,readonly) UIImage * icon; 
@property (getter=isGenerated,nonatomic,readonly) BOOL generated; 
@property (nonatomic,readonly) UIColor * extractedBackgroundColor; 
@optional
-(BOOL)isGenerated;
-(UIColor *)extractedBackgroundColor;

@required
-(UIImage *)icon;

@end

