/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CNChangeHistoryAnchor : NSObject <NSCopying, NSSecureCoding> {

	long long _sequenceNumber;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)sequenceNumber;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSequenceNumber:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

