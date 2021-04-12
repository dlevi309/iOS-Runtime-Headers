/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@class NSString;

@interface AMPWritingDirectionsCounts : NSObject {

	 natural;
	 leftToRight;
	 rightToLeft;
	 total;
	 significantValues;
	 hasStronglyTypedCounts;
	 isRTLEnough;
	 isRTLMinimal;

}

@property (readonly,nonatomic) unsigned long long natural; 
@property (readonly,nonatomic) unsigned long long leftToRight; 
@property (readonly,nonatomic) unsigned long long rightToLeft; 
@property (readonly,nonatomic) unsigned long long total; 
@property (readonly,nonatomic) unsigned long long significantValues; 
@property (readonly,nonatomic) BOOL hasStronglyTypedCounts; 
@property (readonly,nonatomic) BOOL isRTLEnough; 
@property (readonly,nonatomic) BOOL isRTLMinimal; 
@property (readonly,nonatomic) NSString * description; 
+(id)add:(id)arg1 to:(id)arg2 ;
+(id)zero;
-(id)init;
-(unsigned long long)total;
-(NSString *)description;
-(unsigned long long)natural;
-(unsigned long long)rightToLeft;
-(unsigned long long)leftToRight;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)significantValues;
-(BOOL)hasStronglyTypedCounts;
-(BOOL)isRTLEnough;
-(BOOL)isRTLMinimal;
-(id)initWithNatural:(unsigned long long)arg1 leftToRight:(unsigned long long)arg2 rightToLeft:(unsigned long long)arg3 ;
@end

