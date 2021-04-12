/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKTransitSectionController.h>

@class NSArray;

@interface MKTransitInactiveLinesSectionController : MKTransitSectionController {

	NSArray* _inactiveLines;

}

@property (nonatomic,readonly) NSArray * inactiveLines;              //@synthesize inactiveLines=_inactiveLines - In the implementation block
-(id)init;
-(void)_setNeedsBuildRows;
-(id)_pagingFilter;
-(void)_buildRows;
-(NSArray *)inactiveLines;
@end

