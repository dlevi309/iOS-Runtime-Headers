/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
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
-(BOOL)isPromisedItem;
-(NSString *)previewItemContentType;
-(NSURL *)previewItemURLForDisplay;
-(BOOL)wantsDefaultMediaPlayer;
-(double)autoPlaybackPosition;
-(UIColor *)backgroundColorOverride;
-(NSDictionary *)previewOptions;
-(void)setPreviewOptions:(id)arg1;

@end

