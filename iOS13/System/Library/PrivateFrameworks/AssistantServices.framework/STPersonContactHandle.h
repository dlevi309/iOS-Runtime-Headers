/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)handle;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setHandle:(NSString *)arg1 ;
-(BOOL)isEqualToPersonContactHandle:(id)arg1 ;
@end

