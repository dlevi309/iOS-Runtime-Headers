/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalableOperation.h>

@class NSUUID;

@interface HDDiscardWorkoutOperation : HDJournalableOperation {

	NSUUID* _builderIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * builderIdentifier;              //@synthesize builderIdentifier=_builderIdentifier - In the implementation block
-(BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(NSUUID *)builderIdentifier;
-(id)initWithBuilderIdentifier:(id)arg1 ;
@end

