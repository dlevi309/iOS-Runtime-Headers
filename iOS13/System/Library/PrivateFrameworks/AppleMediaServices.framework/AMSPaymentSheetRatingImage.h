/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString;

@interface AMSPaymentSheetRatingImage : NSObject {

	long long _ratingType;
	NSString* _URLString;
	NSString* _value;

}

@property (nonatomic,copy,readonly) NSString * localAssetName; 
@property (nonatomic,readonly) long long ratingType;                                     //@synthesize ratingType=_ratingType - In the implementation block
@property (getter=isServerSupplied,nonatomic,readonly) BOOL serverSupplied; 
@property (nonatomic,readonly) BOOL tint; 
@property (nonatomic,copy,readonly) NSString * URLString;                                //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                                    //@synthesize value=_value - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)value;
-(NSString *)URLString;
-(long long)ratingType;
-(id)initWithURLString:(id)arg1 ;
-(BOOL)tint;
-(long long)_ratingTypeForType:(id)arg1 ;
-(BOOL)isServerSupplied;
-(NSString *)localAssetName;
@end

