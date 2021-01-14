/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString;


@protocol PXDebugHierarchyElement
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double zPosition; 
@property (nonatomic,readonly) double alpha; 
@property (nonatomic,readonly) CGImageRef previewImage; 
@property (nonatomic,readonly) CGRect contentsRect; 
@property (nonatomic,readonly) NSString * contentsGravity; 
@property (nonatomic,readonly) CGColorRef backgroundColor; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL canHaveChildren; 
@property (nonatomic,readonly) unsigned long long identifier; 
@property (nonatomic,readonly) unsigned long long parentIdentifier; 
@required
-(CGRect)contentsRect;
-(double)alpha;
-(BOOL)canHaveChildren;
-(unsigned long long)parentIdentifier;
-(CGRect)frame;
-(CGColorRef)backgroundColor;
-(NSString *)name;
-(CGImageRef)previewImage;
-(unsigned long long)identifier;
-(NSString *)contentsGravity;
-(double)zPosition;

@end

