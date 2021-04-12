/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <ATFoundation/ATFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATAssetLinkPowerLoggerAggregationKey : NSObject <NSCopying> {

	long long _linkType;
	NSString* _dataclass;
	NSString* _assetType;

}

@property (readonly) long long linkType;                //@synthesize linkType=_linkType - In the implementation block
@property (readonly) NSString * dataclass;              //@synthesize dataclass=_dataclass - In the implementation block
@property (readonly) NSString * assetType;              //@synthesize assetType=_assetType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)assetType;
-(long long)linkType;
-(NSString *)dataclass;
-(id)initWithLinkType:(long long)arg1 dataclass:(id)arg2 assetType:(id)arg3 ;
@end

