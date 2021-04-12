/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <libobjc.A.dylib/VCPHomeKitAnalysisSessionClientProtocol.h>

@class VCPHomeKitAnalysisSession;

@interface VCPHomeKitSessionExportedObject : NSObject <VCPHomeKitAnalysisSessionClientProtocol> {

	VCPHomeKitAnalysisSession* _weakSession;

}

@property (assign,nonatomic,__weak) VCPHomeKitAnalysisSession * weakSession;              //@synthesize weakSession=_weakSession - In the implementation block
-(void)setWeakSession:(VCPHomeKitAnalysisSession *)arg1 ;
-(void)processResults:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(VCPHomeKitAnalysisSession *)weakSession;
@end

