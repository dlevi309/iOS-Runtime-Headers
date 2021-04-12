/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)category;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 ;
-(void)setupASL;
-(NSString *)subsystem;
-(id)loggingName;
-(asl_object_sRef)aslClient;
-(id)aslQueue;
@end

