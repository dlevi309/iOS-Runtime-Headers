/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString;


@protocol PXGAXGroupSource <NSObject>
@property (nonatomic,readonly) NSString * axLocalizedLabel; 
@property (nonatomic,readonly) CGRect axFrame; 
@property (nonatomic,readonly) CGRect axVisibleRect; 
@required
-(NSString *)axLocalizedLabel;
-(CGRect)axVisibleRect;
-(CGRect*)axConvertRect:(CGRect)arg1 fromDescendantGroup:(id)arg2;
-(CGRect*)axConvertRect:(CGRect)arg1 toDescendantGroup:(id)arg2;
-(CGPoint*)axConvertPoint:(CGPoint)arg1 fromDescendantGroup:(id)arg2;
-(CGPoint*)axConvertPoint:(CGPoint)arg1 toDescendantGroup:(id)arg2;
-(CGRect)axFrame;

@end

