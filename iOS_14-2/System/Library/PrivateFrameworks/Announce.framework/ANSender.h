/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ANSender : NSObject <NSSecureCoding> {

	NSString* _identifier;
	unsigned long long _type;

}

@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)senderWithID:(id)arg1 type:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithID:(id)arg1 type:(unsigned long long)arg2 ;
-(id)stringForSenderIdentifierType:(unsigned long long)arg1 ;
@end

