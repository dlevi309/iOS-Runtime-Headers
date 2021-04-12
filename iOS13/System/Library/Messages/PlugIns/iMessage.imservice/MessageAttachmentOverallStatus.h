/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@interface MessageAttachmentOverallStatus : NSObject {

	BOOL _failed;
	unsigned _error;

}

@property (assign) BOOL failed;                 //@synthesize failed=_failed - In the implementation block
@property (assign) unsigned error;              //@synthesize error=_error - In the implementation block
-(unsigned)error;
-(void)setError:(unsigned)arg1 ;
-(BOOL)failed;
-(void)setFailed:(BOOL)arg1 ;
@end

