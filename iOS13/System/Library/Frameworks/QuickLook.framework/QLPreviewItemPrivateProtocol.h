/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

@class NSString, NSURL, UIColor, NSDictionary;


@protocol QLPreviewItemPrivateProtocol <QLPreviewItem>
@property (nonatomic,readonly) NSString * previewItemContentType; 
@property (readonly) NSURL * previewItemURLForDisplay; 
@property (nonatomic,readonly) BOOL isPromisedItem; 
@property (readonly) double autoPlaybackPosition; 
@property (readonly) UIColor * backgroundColorOverride; 
@property (readonly) BOOL wantsDefaultMediaPlayer; 
@property (readonly) NSString * MIMEType; 
@property (nonatomic,copy) NSDictionary * previewOptions; 
@optional
-(NSString *)MIMEType;
-(NSString *)previewItemContentType;
-(NSURL *)previewItemURLForDisplay;
-(BOOL)isPromisedItem;
-(UIColor *)backgroundColorOverride;
-(NSDictionary *)previewOptions;
-(void)setPreviewOptions:(id)arg1;
-(BOOL)wantsDefaultMediaPlayer;
-(double)autoPlaybackPosition;

@end

