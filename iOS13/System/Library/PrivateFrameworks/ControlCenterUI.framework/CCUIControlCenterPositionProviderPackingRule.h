/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CCUIControlCenterPositionProviderPackingRule : NSObject <NSCopying> {

	unsigned long long _packFrom;
	unsigned long long _packingOrder;
	CCUILayoutSize _sizeLimit;

}

@property (nonatomic,readonly) unsigned long long packFrom;                  //@synthesize packFrom=_packFrom - In the implementation block
@property (nonatomic,readonly) unsigned long long packingOrder;              //@synthesize packingOrder=_packingOrder - In the implementation block
@property (nonatomic,readonly) CCUILayoutSize sizeLimit;                     //@synthesize sizeLimit=_sizeLimit - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(CCUILayoutSize)sizeLimit;
-(id)initWithPackFrom:(unsigned long long)arg1 packingOrder:(unsigned long long)arg2 sizeLimit:(CCUILayoutSize)arg3 ;
-(unsigned long long)packFrom;
-(unsigned long long)packingOrder;
@end

