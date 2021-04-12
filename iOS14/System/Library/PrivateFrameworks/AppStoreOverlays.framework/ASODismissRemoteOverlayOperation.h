/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
*/

#import <Foundation/NSOperation.h>

@protocol ASORemoteContextProvider;
@interface ASODismissRemoteOverlayOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;
	id<ASORemoteContextProvider> _contextProvider;

}

@property (assign) BOOL isExecuting;                                                           //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign) BOOL isFinished;                                                            //@synthesize isFinished=_isFinished - In the implementation block
@property (assign,nonatomic,__weak) id<ASORemoteContextProvider> contextProvider;              //@synthesize contextProvider=_contextProvider - In the implementation block
-(void)start;
-(id<ASORemoteContextProvider>)contextProvider;
-(BOOL)isFinished;
-(void)setContextProvider:(id<ASORemoteContextProvider>)arg1 ;
-(BOOL)isExecuting;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)cancel;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)finishExecuting;
-(id)initWithContextProvider:(id)arg1 ;
@end

