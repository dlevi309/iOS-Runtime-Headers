/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString;


@protocol PXGAXInfo <PXGAXElement>
@property (nonatomic,readonly) long long axContentKind; 
@property (nonatomic,readonly) NSString * axText; 
@property (nonatomic,readonly) NSString * axTitle; 
@property (nonatomic,readonly) NSString * axSubtitle; 
@property (nonatomic,readonly) NSString * axImageName; 
@property (nonatomic,readonly) id<PXDisplayAsset> axAsset; 
@property (nonatomic,readonly) NSObject*<PXAnonymousView> axView; 
@required
-(NSString *)axText;
-(NSString *)axSubtitle;
-(NSString *)axImageName;
-(id<PXDisplayAsset>)axAsset;
-(long long)axContentKind;
-(NSObject*<PXAnonymousView>)axView;
-(NSString *)axTitle;

@end

