/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTPersistenceContextDelegate <NSObject>
@required
-(BOOL)persistenceContextPerformedSave:(id)arg1 error:(id*)arg2;
-(BOOL)persistenceContextShouldExecute:(id)arg1;
-(void)persistenceContext:(id)arg1 encounteredError:(id)arg2;

@end

