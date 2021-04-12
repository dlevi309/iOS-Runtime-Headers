/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNRegulatoryLogger.h>

@class NSString;

@interface _CNRegulatoryLogger : NSObject <CNRegulatoryLogger> {

	ct_green_tea_logger_sRef _log;

}

@property (nonatomic,readonly) ct_green_tea_logger_sRef log;              //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(ct_green_tea_logger_sRef)log;
-(void)modifyingContactsData;
-(void)readingContactsData;
-(void)readAndTransmittingContactsData;
-(void)dealloc;
@end

