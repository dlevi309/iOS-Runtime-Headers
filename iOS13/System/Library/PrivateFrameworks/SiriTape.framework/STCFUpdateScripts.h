/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
*/


@class NSDictionary;

@interface STCFUpdateScripts : NSObject {

	NSDictionary* _updatedScripts;

}
-(id)init;
-(void)_getUpdatedScripts;
-(void)_writeUpdatedReplayFileAt:(id)arg1 withObjects:(id)arg2 error:(id*)arg3 ;
-(void)updateCFScriptsForReplayFile:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

