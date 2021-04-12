/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <CoreFoundation/NSException.h>

@class TCMessageEntry;

@interface TCMessageException : NSException {

	TCMessageEntry* m_entry;

}
+(void)initialize;
+(void)raise:(id)arg1 ;
+(id)exceptionWithMessage:(id)arg1 ;
+(id)exceptionWithUntaggedMessage:(id)arg1 ;
+(void)raiseUntaggedMessage:(id)arg1 ;
+(id)nsError:(id)arg1 domain:(id)arg2 ;
-(id)description;
-(id)initWithMessage:(id)arg1 ;
-(id)getEntry;
-(id)initWithUntaggedMessage:(id)arg1 ;
@end

