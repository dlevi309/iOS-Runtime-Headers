/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNTask.h>

@class NSString;

@interface CNEmailAddressSanitizationTask : CNTask {

	NSString* _address;

}
-(id)initWithAddress:(id)arg1 ;
-(id)description;
-(void)removeMailtoPrefix;
-(id)run:(id*)arg1 ;
@end

