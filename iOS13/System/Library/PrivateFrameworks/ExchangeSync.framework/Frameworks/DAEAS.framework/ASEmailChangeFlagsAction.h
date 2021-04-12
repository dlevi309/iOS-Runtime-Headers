/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DataAccess/DAAction.h>

@interface ASEmailChangeFlagsAction : DAAction {

	BOOL _read;
	BOOL _flagged;
	unsigned long long _changedFlags;

}

@property (assign,nonatomic) BOOL read;                                    //@synthesize read=_read - In the implementation block
@property (assign,nonatomic) BOOL flagged;                                 //@synthesize flagged=_flagged - In the implementation block
@property (assign,nonatomic) unsigned long long changedFlags;              //@synthesize changedFlags=_changedFlags - In the implementation block
-(void)setRead:(BOOL)arg1 ;
-(BOOL)read;
-(void)setFlagged:(BOOL)arg1 ;
-(BOOL)flagged;
-(id)initWithServerID:(id)arg1 read:(BOOL)arg2 flagged:(BOOL)arg3 changedFlags:(unsigned long long)arg4 ;
-(void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(unsigned long long)changedFlags;
-(void)setChangedFlags:(unsigned long long)arg1 ;
@end

