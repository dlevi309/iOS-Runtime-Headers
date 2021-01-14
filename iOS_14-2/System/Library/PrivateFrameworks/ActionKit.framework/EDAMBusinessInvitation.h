/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMBusinessInvitation : FATObject {

	NSNumber* _businessId;
	NSString* _email;
	NSNumber* _role;
	NSNumber* _status;
	NSNumber* _requesterId;
	NSNumber* _fromWorkChat;
	NSNumber* _created;

}

@property (nonatomic,retain) NSNumber * businessId;                //@synthesize businessId=_businessId - In the implementation block
@property (nonatomic,retain) NSString * email;                     //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSNumber * role;                      //@synthesize role=_role - In the implementation block
@property (nonatomic,retain) NSNumber * status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSNumber * requesterId;               //@synthesize requesterId=_requesterId - In the implementation block
@property (nonatomic,retain) NSNumber * fromWorkChat;              //@synthesize fromWorkChat=_fromWorkChat - In the implementation block
@property (nonatomic,retain) NSNumber * created;                   //@synthesize created=_created - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setEmail:(NSString *)arg1 ;
-(void)setCreated:(NSNumber *)arg1 ;
-(NSNumber *)created;
-(void)setRole:(NSNumber *)arg1 ;
-(void)setBusinessId:(NSNumber *)arg1 ;
-(NSNumber *)businessId;
-(void)setStatus:(NSNumber *)arg1 ;
-(NSNumber *)role;
-(NSString *)email;
-(NSNumber *)status;
-(NSNumber *)requesterId;
-(void)setRequesterId:(NSNumber *)arg1 ;
-(NSNumber *)fromWorkChat;
-(void)setFromWorkChat:(NSNumber *)arg1 ;
@end

