/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSString, UIImage;


@protocol UILargeContentViewerItem <NSObject>
@property (nonatomic,readonly) BOOL showsLargeContentViewer; 
@property (nonatomic,copy,readonly) NSString * largeContentTitle; 
@property (nonatomic,readonly) UIImage * largeContentImage; 
@property (nonatomic,readonly) BOOL scalesLargeContentImage; 
@property (nonatomic,readonly) UIEdgeInsets largeContentImageInsets; 
@required
-(NSString *)largeContentTitle;
-(UIImage *)largeContentImage;
-(UIEdgeInsets)largeContentImageInsets;
-(BOOL)scalesLargeContentImage;
-(BOOL)showsLargeContentViewer;

@end

