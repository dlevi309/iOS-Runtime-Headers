/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/


#import <TemplateKit/TemplateKit-Structs.h>
@interface TLKUtilities : NSObject
+(void)dispatchMainIfNecessary:(/*^block*/id)arg1 ;
+(double)onePixelForCurrentScreenResolution;
+(UIEdgeInsets)standardInsets;
+(double)standardTableCellContentInset;
+(id)testImageWithSize:(CGSize)arg1 text:(id)arg2 ;
+(BOOL)recursivelyCheckIfSubviewTapped:(id)arg1 forTappedView:(id)arg2 ;
+(void)performAnimatableChanges:(/*^block*/id)arg1 animated:(BOOL)arg2 ;
+(void)performAnimatableChanges:(/*^block*/id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)dispatchAsyncIfNecessary:(/*^block*/id)arg1 ;
+(BOOL)deviceSupportsRotation;
+(id)testImageWithSize:(CGSize)arg1 ;
+(void)performAnimatableChanges:(/*^block*/id)arg1 ;
@end

