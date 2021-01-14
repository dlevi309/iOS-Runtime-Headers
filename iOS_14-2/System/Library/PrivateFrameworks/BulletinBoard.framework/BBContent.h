/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BBContent : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _message;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * message;               //@synthesize message=_message - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contentWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqualToContent:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

