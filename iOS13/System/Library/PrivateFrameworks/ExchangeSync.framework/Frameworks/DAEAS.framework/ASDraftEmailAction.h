/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DataAccess/DAAction.h>

@interface ASDraftEmailAction : DAAction {

	BOOL _send;

}

@property (assign,nonatomic) BOOL send;              //@synthesize send=_send - In the implementation block
-(BOOL)send;
-(void)setSend:(BOOL)arg1 ;
-(id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 send:(BOOL)arg3 ;
-(void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
@end

