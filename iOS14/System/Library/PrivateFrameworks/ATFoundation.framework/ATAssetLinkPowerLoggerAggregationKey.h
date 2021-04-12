/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)dataclass;
-(NSString *)assetType;
-(long long)linkType;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLinkType:(long long)arg1 dataclass:(id)arg2 assetType:(id)arg3 ;
@end

