/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSObservationSource.h>

@protocol NSLayoutItem;
@class NSArray, NSLayoutRect;

@interface _NSLayoutRectObservable : NSObservationSource {

	NSArray* _anchorObservations;
	NSLayoutRect* _rectangle;
	id<NSLayoutItem> _layoutItem;

}
+(id)observableForRect:(id)arg1 inItem:(id)arg2 ;
-(void)dealloc;
-(id)initWithRect:(id)arg1 inLayoutItem:(id)arg2 ;
-(void)_reflectUpdatedRect:(id)arg1 ;
@end

