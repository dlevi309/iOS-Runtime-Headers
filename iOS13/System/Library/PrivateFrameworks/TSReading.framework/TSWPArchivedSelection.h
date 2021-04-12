/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSPObject.h>

@class TSWPSelection;

@interface TSWPArchivedSelection : TSPObject {

	TSWPSelection* _selection;

}

@property (nonatomic,retain) TSWPSelection * selection;              //@synthesize selection=_selection - In the implementation block
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(TSWPSelection *)selection;
-(void)setSelection:(TSWPSelection *)arg1 ;
@end

