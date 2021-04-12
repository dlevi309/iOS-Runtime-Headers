/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

