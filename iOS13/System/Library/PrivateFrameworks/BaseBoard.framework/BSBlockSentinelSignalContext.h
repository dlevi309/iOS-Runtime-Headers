/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSBlockSentinelSignalContext.h>

@protocol BSBlockSentinelSignalContext <NSObject>
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (getter=isFailed,nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) id context; 
@required
-(id)context;
-(BOOL)isComplete;
-(BOOL)isFailed;

@end


@class NSString;

@interface BSBlockSentinelSignalContext : NSObject <BSBlockSentinelSignalContext> {

	BOOL _complete;
	BOOL _failed;
	id _context;

}

@property (assign,getter=isComplete,nonatomic) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (assign,getter=isFailed,nonatomic) BOOL failed;                  //@synthesize failed=_failed - In the implementation block
@property (assign,nonatomic,__weak) id context;                            //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)context;
+(id)failureContext;
-(id)context;
-(void)setContext:(id)arg1 ;
-(BOOL)isComplete;
-(BOOL)isFailed;
-(void)setFailed:(BOOL)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
@end

