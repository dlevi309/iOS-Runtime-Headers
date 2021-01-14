/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTPhoneNumberInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isPresent;
	BOOL _isEditable;
	BOOL _isRead;
	NSString* _label;
	NSString* _number;
	NSString* _displayPhoneNumber;

}

@property (nonatomic,retain) NSString * label;                           //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * number;                          //@synthesize number=_number - In the implementation block
@property (nonatomic,retain) NSString * displayPhoneNumber;              //@synthesize displayPhoneNumber=_displayPhoneNumber - In the implementation block
@property (assign,nonatomic) BOOL isPresent;                             //@synthesize isPresent=_isPresent - In the implementation block
@property (assign,nonatomic) BOOL isEditable;                            //@synthesize isEditable=_isEditable - In the implementation block
@property (assign,nonatomic) BOOL isRead;                                //@synthesize isRead=_isRead - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setNumber:(NSString *)arg1 ;
-(BOOL)isEditable;
-(void)setIsEditable:(BOOL)arg1 ;
-(NSString *)number;
-(BOOL)isPresent;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDisplayPhoneNumber:(NSString *)arg1 ;
-(id)description;
-(void)setIsPresent:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setIsRead:(BOOL)arg1 ;
-(NSString *)displayPhoneNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isRead;
@end

