/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@interface MRProtocolMessageLogger : NSObject {

	BOOL _shouldLog;
	BOOL _shouldVerboselyLog;

}

@property (assign,nonatomic) BOOL shouldLog;                       //@synthesize shouldLog=_shouldLog - In the implementation block
@property (assign,nonatomic) BOOL shouldVerboselyLog;              //@synthesize shouldVerboselyLog=_shouldVerboselyLog - In the implementation block
+(id)sharedLogger;
-(void)logMessage:(id)arg1 client:(id)arg2 protocolMessage:(id)arg3 ;
-(id)init;
-(void)setShouldLog:(BOOL)arg1 ;
-(void)setShouldVerboselyLog:(BOOL)arg1 ;
-(BOOL)shouldVerboselyLog;
-(BOOL)shouldLog;
@end

