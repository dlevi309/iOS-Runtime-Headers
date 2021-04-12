/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>
#import <libobjc.A.dylib/CSPresentationProviding.h>

@class NSString, NSArray;

@interface CSCoverSheetViewBase : SBFTouchPassThroughView <CSPresentationProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> presentationCoordinateSpace; 
@property (nonatomic,copy,readonly) NSArray * presentationRegions; 
-(NSArray *)presentationRegions;
-(id<UICoordinateSpace>)presentationCoordinateSpace;
-(BOOL)isCoverSheetView;
@end

