/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTPhoneBookEntry : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isHidden;
	NSString* _name;
	NSString* _number;
	NSString* _altNumber;
	NSString* _altText;
	NSString* _email;
	NSString* _group;

}

@property (assign,nonatomic) BOOL isHidden;                     //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,retain) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * number;                 //@synthesize number=_number - In the implementation block
@property (nonatomic,retain) NSString * altNumber;              //@synthesize altNumber=_altNumber - In the implementation block
@property (nonatomic,retain) NSString * altText;                //@synthesize altText=_altText - In the implementation block
@property (nonatomic,retain) NSString * email;                  //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSString * group;                  //@synthesize group=_group - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setNumber:(NSString *)arg1 ;
-(void)setGroup:(NSString *)arg1 ;
-(NSString *)group;
-(NSString *)altText;
-(NSString *)altNumber;
-(void)setEmail:(NSString *)arg1 ;
-(void)setAltText:(NSString *)arg1 ;
-(NSString *)number;
-(void)setAltNumber:(NSString *)arg1 ;
-(BOOL)isHidden;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)email;
-(void)setIsHidden:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

