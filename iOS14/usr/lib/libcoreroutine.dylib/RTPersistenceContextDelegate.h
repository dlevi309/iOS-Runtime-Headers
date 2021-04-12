/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTPersistenceContextDelegate <NSObject>
@required
-(void)persistenceContext:(id)arg1 encounteredError:(id)arg2;
-(BOOL)persistenceContextShouldExecute:(id)arg1;
-(BOOL)persistenceContextPerformedSave:(id)arg1 error:(id*)arg2;

@end

