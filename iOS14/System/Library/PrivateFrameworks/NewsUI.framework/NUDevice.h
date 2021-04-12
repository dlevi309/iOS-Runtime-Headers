/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

@class NSString;


@protocol NUDevice <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) unsigned long long family; 
@property (nonatomic,readonly) BOOL hasMetalSupport; 
@property (nonatomic,readonly) BOOL hasOpenGLSupport; 
@property (nonatomic,readonly) long long openGLVirtualScreen; 
@property (nonatomic,readonly) long long defaultSampleMode; 
@required
-(NSString *)model;
-(unsigned long long)family;
-(NSString *)name;
-(id)renderer:(out id*)arg1;
-(id)lowPriorityRenderer:(out id*)arg1;
-(id)rendererWithoutIntermediateCaching:(out id*)arg1;
-(id)lowPriorityRendererWithoutIntermediateCaching:(out id*)arg1;
-(BOOL)hasMetalSupport;
-(BOOL)hasOpenGLSupport;
-(long long)openGLVirtualScreen;
-(long long)defaultSampleMode;

@end

