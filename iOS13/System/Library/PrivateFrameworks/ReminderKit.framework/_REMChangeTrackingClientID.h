/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)clientName;
-(NSString *)accountIdentifier;
-(id)initWithClientName:(id)arg1 accountIdentifier:(id)arg2 ;
@end

