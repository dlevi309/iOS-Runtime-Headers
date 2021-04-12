/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKTransitSectionController.h>

@class NSArray;

@interface MKTransitInactiveLinesSectionController : MKTransitSectionController {

	NSArray* _inactiveLines;

}

@property (nonatomic,readonly) NSArray * inactiveLines;              //@synthesize inactiveLines=_inactiveLines - In the implementation block
-(void)_buildRows;
-(id)init;
-(void)_setNeedsBuildRows;
-(id)_pagingFilter;
-(NSArray *)inactiveLines;
@end

