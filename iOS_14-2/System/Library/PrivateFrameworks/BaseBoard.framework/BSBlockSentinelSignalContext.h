/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSBlockSentinelSignalContext.h>

@protocol BSBlockSentinelSignalContext <NSObject>
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (getter=isFailed,nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) id context; 
@required
-(BOOL)isComplete;
-(id)context;
-(BOOL)isFailed;

@end


@class NSString;

@interface BSBlockSentinelSignalContext : NSObject <BSBlockSentinelSignalContext> {

	BOOL _complete;
	BOOL _failed;
	id _context;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (getter=isFailed,nonatomic,readonly) BOOL failed;                  //@synthesize failed=_failed - In the implementation block
@property (nonatomic,readonly) id context;                                   //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isComplete;
-(id)context;
-(BOOL)isFailed;
@end

