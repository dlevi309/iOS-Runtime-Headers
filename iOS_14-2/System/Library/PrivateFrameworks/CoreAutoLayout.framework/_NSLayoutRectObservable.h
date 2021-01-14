/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
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
@end

