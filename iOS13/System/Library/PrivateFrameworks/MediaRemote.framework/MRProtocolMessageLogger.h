/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@interface MRProtocolMessageLogger : NSObject {

	BOOL _shouldLog;

}

@property (assign,nonatomic) BOOL shouldLog;              //@synthesize shouldLog=_shouldLog - In the implementation block
+(id)sharedLogger;
-(id)init;
-(BOOL)shouldLog;
-(void)logMessage:(id)arg1 client:(id)arg2 protocolMessage:(id)arg3 ;
-(void)setShouldLog:(BOOL)arg1 ;
@end

