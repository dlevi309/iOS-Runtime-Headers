/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol OS_dispatch_queue;
#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSString, NSObject;

@interface CNLoggingContext : NSObject {

	NSString* _subsystem;
	NSString* _category;
	void* _aslClient;
	NSObject*<OS_dispatch_queue> _aslQueue;

}

@property (nonatomic,copy,readonly) NSString * category;               //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * subsystem;              //@synthesize subsystem=_subsystem - In the implementation block
+(id)loggingContextWithSubsystem:(id)arg1 category:(id)arg2 ;
-(NSString *)subsystem;
-(NSString *)category;
-(void)setupASL;
-(id)aslQueue;
-(id)loggingName;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 ;
-(asl_object_sRef)aslClient;
@end

