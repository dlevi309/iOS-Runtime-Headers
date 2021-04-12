/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)zero;
+(id)add:(id)arg1 to:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)leftToRight;
-(unsigned long long)rightToLeft;
-(unsigned long long)total;
-(unsigned long long)natural;
-(unsigned long long)significantValues;
-(BOOL)hasStronglyTypedCounts;
-(BOOL)isRTLEnough;
-(BOOL)isRTLMinimal;
-(id)initWithNatural:(unsigned long long)arg1 leftToRight:(unsigned long long)arg2 rightToLeft:(unsigned long long)arg3 ;
@end

