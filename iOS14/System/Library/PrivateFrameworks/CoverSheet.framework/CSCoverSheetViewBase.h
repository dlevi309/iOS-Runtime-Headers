/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>
#import <libobjc.A.dylib/CSPresentationProviding.h>

@class NSArray, NSString;

@interface CSCoverSheetViewBase : SBFTouchPassThroughView <CSPresentationProviding>

@property (nonatomic,__weak,readonly) id<UICoordinateSpace> presentationCoordinateSpace; 
@property (nonatomic,copy,readonly) NSArray * presentationRegions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UICoordinateSpace>)presentationCoordinateSpace;
-(NSArray *)presentationRegions;
-(BOOL)isCoverSheetView;
@end

