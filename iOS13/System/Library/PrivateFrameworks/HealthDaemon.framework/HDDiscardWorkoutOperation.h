/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

