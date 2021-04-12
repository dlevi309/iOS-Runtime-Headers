/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFSendRecipient : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _address;

}

@property (nonatomic,copy) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * address;                     //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) long long contactType; 
+(BOOL)supportsSecureCoding;
-(long long)contactType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithName:(id)arg1 address:(id)arg2 ;
-(id)recipientContentItem;
@end

