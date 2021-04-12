/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

