/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SBAppLayout, SBDisplayItem;

@interface _SBAppSwitcherSnapshotCacheKey : NSObject <NSCopying> {

	unsigned long long _hash;
	SBAppLayout* _appLayout;
	SBDisplayItem* _displayItem;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;                  //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,readonly) SBDisplayItem * displayItem;              //@synthesize displayItem=_displayItem - In the implementation block
-(SBAppLayout *)appLayout;
-(SBDisplayItem *)displayItem;
-(unsigned long long)hash;
-(id)initWithDisplayItem:(id)arg1 inAppLayout:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

