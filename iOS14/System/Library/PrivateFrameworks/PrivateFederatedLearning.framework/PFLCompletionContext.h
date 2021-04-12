/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/


@class NSError, NSData;

@interface PFLCompletionContext : NSObject {

	NSError* _error;
	NSData* _privatizedDiffs;

}

@property (nonatomic,readonly) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSData * privatizedDiffs;              //@synthesize privatizedDiffs=_privatizedDiffs - In the implementation block
-(NSError *)error;
-(NSData *)privatizedDiffs;
-(id)initWithPrivatizedDiffs:(id)arg1 error:(id)arg2 ;
@end

