/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/

#import <BehaviorMiner/BehaviorMiner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BMItemType, NSString;

@interface BMItem : NSObject <NSCopying> {

	BMItemType* _type;
	NSString* _normalizedValue;

}

@property (nonatomic,retain) BMItemType * type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * normalizedValue;              //@synthesize normalizedValue=_normalizedValue - In the implementation block
@property (nonatomic,copy,readonly) id value; 
+(id)itemWithType:(id)arg1 stringValue:(id)arg2 ;
+(id)itemWithType:(id)arg1 numberValue:(id)arg2 ;
+(id)itemWithType:(id)arg1 UUIDValue:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BMItemType *)type;
-(void)setType:(BMItemType *)arg1 ;
-(id)value;
-(id)initWithType:(id)arg1 value:(id)arg2 ;
-(NSString *)normalizedValue;
-(void)setNormalizedValue:(NSString *)arg1 ;
-(id)initWithType:(id)arg1 normalizedValue:(id)arg2 ;
-(id)uniformIdentifier;
@end

