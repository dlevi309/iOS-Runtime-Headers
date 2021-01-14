/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)itemEdgeSize;
-(double)itemSpacing;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)_initWithLayoutOptions:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

