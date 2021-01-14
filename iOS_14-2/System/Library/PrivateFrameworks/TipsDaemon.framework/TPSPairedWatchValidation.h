/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TPSTargetingValidation.h>

@class NSUUID;

@interface TPSPairedWatchValidation : TPSTargetingValidation {

	NSUUID* _capability;

}

@property (nonatomic,copy) NSUUID * capability;              //@synthesize capability=_capability - In the implementation block
-(NSUUID *)capability;
-(void)setCapability:(NSUUID *)arg1 ;
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCapability:(id)arg1 ;
@end

