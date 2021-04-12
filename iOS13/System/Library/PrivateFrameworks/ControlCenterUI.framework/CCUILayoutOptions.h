/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface CCUILayoutOptions : NSObject <NSCopying, NSMutableCopying> {

	double _itemEdgeSize;
	double _itemSpacing;

}

@property (nonatomic,readonly) double itemEdgeSize;              //@synthesize itemEdgeSize=_itemEdgeSize - In the implementation block
@property (nonatomic,readonly) double itemSpacing;               //@synthesize itemSpacing=_itemSpacing - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)itemSpacing;
-(id)_initWithLayoutOptions:(id)arg1 ;
-(double)itemEdgeSize;
@end

