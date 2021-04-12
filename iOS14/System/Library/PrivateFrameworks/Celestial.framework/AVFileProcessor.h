/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@interface AVFileProcessor : NSObject {

	float _percentComplete;
	/*^block*/id _progressBlock;

}
+(id)fileProcessor;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id*)arg3 progressBlock:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 ;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id*)arg3 ;
-(id)rentalInfo:(id)arg1 ;
-(id)sinfsFromFilePath:(id)arg1 ;
-(id)sinfInfoFromFilePath:(id)arg1 ;
@end

