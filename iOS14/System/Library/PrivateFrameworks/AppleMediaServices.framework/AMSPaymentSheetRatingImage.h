/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)URLString;
-(id)initWithURLString:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)ratingType;
-(BOOL)isServerSupplied;
-(NSString *)localAssetName;
-(long long)_ratingTypeForType:(id)arg1 ;
-(BOOL)tint;
-(NSString *)value;
@end

