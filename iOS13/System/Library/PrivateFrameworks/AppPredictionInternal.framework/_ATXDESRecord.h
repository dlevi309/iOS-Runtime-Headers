/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface _ATXDESRecord : NSObject <NSSecureCoding> {

	SCD_Struct_AT45* _predictionItems;
	unsigned long long _predictionCount;
	NSArray* _bundleIds;
	NSString* _launchBundle;
	long long _version;
	unsigned long long _consumerType;

}

@property (nonatomic,readonly) SCD_Struct_AT45* predictionItems;                //@synthesize predictionItems=_predictionItems - In the implementation block
@property (nonatomic,readonly) unsigned long long predictionCount;              //@synthesize predictionCount=_predictionCount - In the implementation block
@property (nonatomic,readonly) NSArray * bundleIds;                             //@synthesize bundleIds=_bundleIds - In the implementation block
@property (nonatomic,readonly) NSString * launchBundle;                         //@synthesize launchBundle=_launchBundle - In the implementation block
@property (nonatomic,readonly) long long version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned long long consumerType;                 //@synthesize consumerType=_consumerType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)data;
-(long long)version;
-(id)info;
-(NSArray *)bundleIds;
-(unsigned long long)consumerType;
-(BOOL)isEqualToRecord:(id)arg1 ;
-(id)initWithScores:(const vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)arg1 version:(long long)arg2 launchBundle:(id)arg3 ;
-(id)initWithAppsByRank:(id)arg1 version:(long long)arg2 launchBundle:(id)arg3 consumerType:(unsigned long long)arg4 ;
-(SCD_Struct_AT45*)predictionItems;
-(unsigned long long)predictionCount;
-(NSString *)launchBundle;
@end

