/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFLoggerBackendAdapter.h>

@class NSArray;

@interface PFLoggerBackendComposite : PFLoggerBackendAdapter {

	BOOL _allBackendsAllowConcurrentAccess;
	NSArray* _backends;

}

@property (retain) NSArray * backends;                                 //@synthesize backends=_backends - In the implementation block
@property (assign) BOOL allBackendsAllowConcurrentAccess;              //@synthesize allBackendsAllowConcurrentAccess=_allBackendsAllowConcurrentAccess - In the implementation block
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithBackends:(id)arg1 ;
-(BOOL)allowsConcurrentAccess;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char*)arg7 ;
-(NSArray *)backends;
-(void)setBackends:(NSArray *)arg1 ;
-(BOOL)allBackendsAllowConcurrentAccess;
-(void)setAllBackendsAllowConcurrentAccess:(BOOL)arg1 ;
@end

