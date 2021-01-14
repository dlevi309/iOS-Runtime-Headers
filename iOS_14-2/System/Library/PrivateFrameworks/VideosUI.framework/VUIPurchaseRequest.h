/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class AMSPurchase, NSString, AMSBuyParams;

@interface VUIPurchaseRequest : NSObject {

	AMSPurchase* _purchase;
	NSString* _buyParamsString;
	long long _type;
	NSString* _enhancedBuyParamsString;
	AMSBuyParams* _amsBuyParams;
	long long _purchaseType;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSString * buyParamsString;                      //@synthesize buyParamsString=_buyParamsString - In the implementation block
@property (assign,nonatomic) long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * enhancedBuyParamsString;              //@synthesize enhancedBuyParamsString=_enhancedBuyParamsString - In the implementation block
@property (nonatomic,retain) AMSBuyParams * amsBuyParams;                     //@synthesize amsBuyParams=_amsBuyParams - In the implementation block
@property (assign,nonatomic) long long purchaseType;                          //@synthesize purchaseType=_purchaseType - In the implementation block
@property (nonatomic,copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) AMSPurchase * purchase;                          //@synthesize purchase=_purchase - In the implementation block
+(long long)getPurchaseTypeFromActionRef:(id)arg1 ;
+(BOOL)shouldPlayWhenDoneForActionRef:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(AMSPurchase *)purchase;
-(void)setType:(long long)arg1 ;
-(id)completionHandler;
-(long long)purchaseType;
-(void)setPurchase:(AMSPurchase *)arg1 ;
-(void)setPurchaseType:(long long)arg1 ;
-(long long)type;
-(void)handleRequestCompletionWithResult:(id)arg1 andError:(id)arg2 ;
-(id)initWithBuyParams:(id)arg1 ofPurchaseType:(long long)arg2 ;
-(void)enqueueWithCompletion:(/*^block*/id)arg1 ;
-(void)_recordErrorLog:(id)arg1 ;
-(NSString *)buyParamsString;
-(void)setBuyParamsString:(NSString *)arg1 ;
-(NSString *)enhancedBuyParamsString;
-(void)setEnhancedBuyParamsString:(NSString *)arg1 ;
-(AMSBuyParams *)amsBuyParams;
-(void)setAmsBuyParams:(AMSBuyParams *)arg1 ;
@end

