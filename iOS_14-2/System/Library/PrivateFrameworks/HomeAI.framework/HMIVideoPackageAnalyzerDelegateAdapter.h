/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoPackageAnalyzerDelegate.h>

@interface HMIVideoPackageAnalyzerDelegateAdapter : HMFObject <HMIVideoPackageAnalyzerDelegate> {

	/*^block*/id _packageAnalyzerDidDetectPackage;

}

@property (copy) id packageAnalyzerDidDetectPackage;              //@synthesize packageAnalyzerDidDetectPackage=_packageAnalyzerDidDetectPackage - In the implementation block
-(id)packageAnalyzerDidDetectPackage;
-(void)packageAnalyzer:(id)arg1 didDetectPackage:(id)arg2 error:(id)arg3 ;
-(void)setPackageAnalyzerDidDetectPackage:(id)arg1 ;
@end

