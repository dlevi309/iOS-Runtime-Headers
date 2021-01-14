/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@interface MessageAttachmentOverallStatus : NSObject {

	BOOL _failed;
	unsigned _error;

}

@property (assign) BOOL failed;                 //@synthesize failed=_failed - In the implementation block
@property (assign) unsigned error;              //@synthesize error=_error - In the implementation block
-(void)setError:(unsigned)arg1 ;
-(void)setFailed:(BOOL)arg1 ;
-(unsigned)error;
-(BOOL)failed;
@end

