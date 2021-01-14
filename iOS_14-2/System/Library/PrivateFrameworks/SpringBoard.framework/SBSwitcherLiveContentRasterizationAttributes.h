/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface SBSwitcherLiveContentRasterizationAttributes : NSObject <NSCopying, NSMutableCopying> {

	BOOL _wantsMinificationFilter;
	long long _rasterizationStyle;

}

@property (assign,nonatomic) long long rasterizationStyle;              //@synthesize rasterizationStyle=_rasterizationStyle - In the implementation block
@property (assign,nonatomic) BOOL wantsMinificationFilter;              //@synthesize wantsMinificationFilter=_wantsMinificationFilter - In the implementation block
-(id)_copyWithClass:(Class)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setWantsMinificationFilter:(BOOL)arg1 ;
-(long long)rasterizationStyle;
-(BOOL)wantsMinificationFilter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRasterizationStyle:(long long)arg1 ;
-(id)attributesByModifyingAttributesWithBlock:(/*^block*/id)arg1 ;
@end

