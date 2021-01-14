/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFApplicationInfo : NSObject <NSSecureCoding> {

	int _pid;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int pid;                          //@synthesize pid=_pid - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)pid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setPid:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

