/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <libobjc.A.dylib/PFLTaskState.h>

@class NSURL;

@interface PFLTaskStateCompilingModel : NSObject <PFLTaskState> {

	NSURL* _modelURL;

}

@property (nonatomic,readonly) NSURL * modelURL;              //@synthesize modelURL=_modelURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)suspend;
-(NSURL *)modelURL;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)tag;
-(id)initWithModelURL:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)resume:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

