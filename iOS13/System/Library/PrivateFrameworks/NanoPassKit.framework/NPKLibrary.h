/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

