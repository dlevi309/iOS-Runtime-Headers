/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNContactLocationVCardSummary : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	NSString* _urlString;

}

@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptiveLabel; 
@property (nonatomic,copy,readonly) NSString * urlString;                     //@synthesize urlString=_urlString - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)urlString;
-(NSString *)descriptiveLabel;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTitle:(id)arg1 URLString:(id)arg2 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

