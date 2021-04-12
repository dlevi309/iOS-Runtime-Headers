/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

@class NSString;


@protocol QLTExtensionThumbnailItem <NSObject>
@property (nonatomic,copy,readonly) NSString * contentType; 
@property (assign) BOOL needsAccessToExternalResources; 
@required
-(NSString *)contentType;
-(void)setNeedsAccessToExternalResources:(BOOL)arg1;
-(void)provideURLWrapper:(/*^block*/id)arg1;
-(BOOL)needsAccessToExternalResources;

@end

