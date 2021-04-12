/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CCUILayoutSize)sizeLimit;
-(unsigned long long)packingOrder;
-(unsigned long long)packFrom;
-(id)initWithPackFrom:(unsigned long long)arg1 packingOrder:(unsigned long long)arg2 sizeLimit:(CCUILayoutSize)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

