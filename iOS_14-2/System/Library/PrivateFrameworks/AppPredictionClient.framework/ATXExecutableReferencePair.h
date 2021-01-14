/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class ATXExecutableReference, ATXExecutableIdentifier;

@interface ATXExecutableReferencePair : NSObject {

	ATXExecutableReference* _reference;
	ATXExecutableIdentifier* _executable;

}

@property (nonatomic,readonly) ATXExecutableReference * reference;                //@synthesize reference=_reference - In the implementation block
@property (nonatomic,readonly) ATXExecutableIdentifier * executable;              //@synthesize executable=_executable - In the implementation block
-(ATXExecutableReference *)reference;
-(ATXExecutableIdentifier *)executable;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithReference:(id)arg1 executable:(id)arg2 ;
@end

