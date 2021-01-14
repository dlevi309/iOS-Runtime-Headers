/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface STPersonContactHandle : NSObject <NSSecureCoding> {

	NSString* _handle;
	NSString* _label;
	unsigned long long _type;

}

@property (nonatomic,copy) NSString * handle;                      //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHandle:(NSString *)arg1 ;
-(NSString *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(BOOL)isEqualToPersonContactHandle:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end

