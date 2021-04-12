/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRead;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)number;
-(void)setNumber:(NSString *)arg1 ;
-(BOOL)isPresent;
-(BOOL)isEditable;
-(NSString *)displayPhoneNumber;
-(void)setDisplayPhoneNumber:(NSString *)arg1 ;
-(void)setIsPresent:(BOOL)arg1 ;
-(void)setIsEditable:(BOOL)arg1 ;
-(void)setIsRead:(BOOL)arg1 ;
@end

