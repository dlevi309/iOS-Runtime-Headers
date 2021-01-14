/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/

#import <libMemoryResourceException.dylib/FPUserProcess.h>

@interface FPCorpseProcess : FPUserProcess
-(BOOL)_isAlive;
-(id)initWithCorpse:(unsigned)arg1 pid:(int)arg2 name:(id)arg3 dirtyFlags:(unsigned)arg4 procFlags:(unsigned)arg5 ;
-(void)addLedgerData:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_populateTask;
-(void)_gatherIdleExitStatus;
-(id)_gatherOwnedVmObjects;
@end

