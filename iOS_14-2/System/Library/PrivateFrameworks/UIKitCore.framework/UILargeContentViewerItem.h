/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)scalesLargeContentImage;
-(UIImage *)largeContentImage;
-(BOOL)showsLargeContentViewer;
-(NSString *)largeContentTitle;
-(UIEdgeInsets)largeContentImageInsets;

@end

