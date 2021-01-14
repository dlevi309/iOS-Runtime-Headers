/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@interface NPKLibrary : NSObject {

	BOOL _needsRelevancyInformation;

}

@property (assign,nonatomic) BOOL needsRelevancyInformation;              //@synthesize needsRelevancyInformation=_needsRelevancyInformation - In the implementation block
+(id)sharedInstance;
-(void)addPassData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)needsRelevancyInformation;
-(void)setNeedsRelevancyInformation:(BOOL)arg1 ;
@end

