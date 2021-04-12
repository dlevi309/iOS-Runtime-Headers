/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DataAccess/DAAction.h>

@interface ASDraftEmailAction : DAAction {

	BOOL _send;

}

@property (assign,nonatomic) BOOL send;              //@synthesize send=_send - In the implementation block
-(void)setSend:(BOOL)arg1 ;
-(BOOL)send;
-(id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 send:(BOOL)arg3 ;
-(void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
@end

