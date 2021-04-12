/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(NSString *)urlString;
-(NSString *)descriptiveLabel;
-(id)initWithTitle:(id)arg1 URLString:(id)arg2 ;
@end

