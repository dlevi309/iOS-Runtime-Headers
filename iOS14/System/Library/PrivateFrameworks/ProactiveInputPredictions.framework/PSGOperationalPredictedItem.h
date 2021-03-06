/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
*/

#import <ProactiveInputPredictions/ProactiveInputPredictions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface PSGOperationalPredictedItem : NSObject <NSSecureCoding, NSCopying> {

	NSString* _itemIdentifier;
	NSString* _value;
	NSString* _bundleIdentifier;
	NSDictionary* _operationData;

}

@property (nonatomic,readonly) NSString * itemIdentifier;                 //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * value;                          //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * operationData;              //@synthesize operationData=_operationData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)itemIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)isEqualToItem:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)operationData;
-(id)initWithItemIdentifier:(id)arg1 value:(id)arg2 bundleIdentifier:(id)arg3 operationData:(id)arg4 ;
@end

