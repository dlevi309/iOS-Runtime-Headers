/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


@class NSString;

@interface XPCTransaction : NSObject {

	BOOL _tranactionCreated;
	NSString* _reason;

}

@property (assign) BOOL tranactionCreated;              //@synthesize tranactionCreated=_tranactionCreated - In the implementation block
@property (retain) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(BOOL)tranactionCreated;
-(void)setTranactionCreated:(BOOL)arg1 ;
@end

