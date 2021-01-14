/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface _TIInputContextEntry : NSObject <NSCopying, NSSecureCoding> {

	NSString* _text;
	NSString* _senderIdentifier;
	NSDate* _timestamp;

}

@property (nonatomic,copy) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * senderIdentifier;              //@synthesize senderIdentifier=_senderIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setSenderIdentifier:(NSString *)arg1 ;
-(id)description;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)senderIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

