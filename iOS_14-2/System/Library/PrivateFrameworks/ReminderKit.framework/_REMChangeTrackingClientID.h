/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/REMChangeTrackingClientIdentifying.h>

@class NSString;

@interface _REMChangeTrackingClientID : NSObject <REMChangeTrackingClientIdentifying> {

	NSString* _clientName;
	NSString* _accountIdentifier;

}

@property (nonatomic,readonly) NSString * clientName;                     //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)clientName;
-(NSString *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithClientName:(id)arg1 accountIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

