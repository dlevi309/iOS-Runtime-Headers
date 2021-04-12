/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFSyncSnapshot : NSObject <NSSecureCoding> {

	NSString* _anchor;
	NSString* _validity;
	long long _count;
	NSString* _key;

}

@property (nonatomic,copy) NSString * anchor;                //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,copy) NSString * validity;              //@synthesize validity=_validity - In the implementation block
@property (assign,nonatomic) long long count;                //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSString * key;                   //@synthesize key=_key - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)count;
-(NSString *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCount:(long long)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
-(NSString *)validity;
-(void)setValidity:(NSString *)arg1 ;
@end

