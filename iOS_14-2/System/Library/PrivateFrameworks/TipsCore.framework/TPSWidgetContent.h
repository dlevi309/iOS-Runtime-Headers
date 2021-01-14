/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSContent.h>

@class NSDictionary;

@interface TPSWidgetContent : TPSContent {

	long long _priority;
	NSDictionary* _attributes;

}

@property (nonatomic,copy) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) long long priority;                   //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(long long)compare:(id)arg1 ;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 metadata:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)titleContent;
-(NSDictionary *)attributes;
-(id)initWithCoder:(id)arg1 ;
-(long long)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(long long)arg1 ;
@end

