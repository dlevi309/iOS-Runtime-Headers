/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface ILCommunication : NSObject <NSSecureCoding> {

	NSString* _sender;
	NSDate* _dateReceived;

}

@property (nonatomic,copy,readonly) NSString * sender;                  //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateReceived;              //@synthesize dateReceived=_dateReceived - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)sender;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)dateReceived;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSender:(id)arg1 dateReceived:(id)arg2 ;
-(BOOL)isEqualToCommunication:(id)arg1 ;
@end

