/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

@class NSString;


@protocol QLTExtensionThumbnailItem <NSObject>
@property (nonatomic,copy,readonly) NSString * contentType; 
@property (assign) BOOL needsAccessToExternalResources; 
@required
-(NSString *)contentType;
-(void)provideURLWrapper:(/*^block*/id)arg1;
-(BOOL)needsAccessToExternalResources;
-(void)setNeedsAccessToExternalResources:(BOOL)arg1;

@end

