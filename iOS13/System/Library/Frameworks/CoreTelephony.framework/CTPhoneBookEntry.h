/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setGroup:(NSString *)arg1 ;
-(BOOL)isHidden;
-(NSString *)group;
-(NSString *)number;
-(void)setNumber:(NSString *)arg1 ;
-(void)setIsHidden:(BOOL)arg1 ;
-(NSString *)altNumber;
-(NSString *)altText;
-(NSString *)email;
-(void)setAltNumber:(NSString *)arg1 ;
-(void)setAltText:(NSString *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
@end

