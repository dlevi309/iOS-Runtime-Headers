/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@class NSString;

@interface HAPPairSetupSessionServerInfo : NSObject {

	int _maxTries;
	NSString* _productData;

}

@property (nonatomic,retain) NSString * productData;              //@synthesize productData=_productData - In the implementation block
@property (assign,nonatomic) int maxTries;                        //@synthesize maxTries=_maxTries - In the implementation block
-(void)setProductData:(NSString *)arg1 ;
-(NSString *)productData;
-(void)setMaxTries:(int)arg1 ;
-(id)initWithProductData:(id)arg1 maxTries:(int)arg2 ;
-(int)maxTries;
@end

