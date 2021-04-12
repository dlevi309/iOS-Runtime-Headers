/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/

#import <BehaviorMiner/BehaviorMiner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BMItemType, NSString;

@interface BMItem : NSObject <NSCopying, NSSecureCoding> {

	BMItemType* _type;
	NSString* _normalizedValue;
	unsigned long long _absoluteSupport;

}

@property (nonatomic,copy,readonly) NSString * normalizedValue;                //@synthesize normalizedValue=_normalizedValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniformIdentifier; 
@property (assign,nonatomic) unsigned long long absoluteSupport;               //@synthesize absoluteSupport=_absoluteSupport - In the implementation block
@property (nonatomic,readonly) BMItemType * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) id value; 
+(BOOL)supportsSecureCoding;
+(id)itemWithType:(id)arg1 stringValue:(id)arg2 ;
+(id)itemWithType:(id)arg1 numberValue:(id)arg2 ;
+(id)itemWithType:(id)arg1 UUIDValue:(id)arg2 ;
-(NSString *)normalizedValue;
-(id)initWithType:(id)arg1 value:(id)arg2 ;
-(unsigned long long)absoluteSupport;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uniformIdentifier;
-(id)description;
-(id)initWithType:(id)arg1 normalizedValue:(id)arg2 ;
-(void)setAbsoluteSupport:(unsigned long long)arg1 ;
-(BMItemType *)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(id)arg1 value:(id)arg2 absoluteSupport:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
@end

