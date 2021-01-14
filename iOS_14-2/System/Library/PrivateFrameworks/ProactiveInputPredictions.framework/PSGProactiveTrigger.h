/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
*/

#import <ProactiveInputPredictions/ProactiveInputPredictions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface PSGProactiveTrigger : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _triggerSourceType;
	NSString* _triggerCategory;
	NSDictionary* _triggerAttributes;

}

@property (nonatomic,readonly) unsigned long long triggerSourceType;              //@synthesize triggerSourceType=_triggerSourceType - In the implementation block
@property (nonatomic,readonly) NSString * triggerCategory;                        //@synthesize triggerCategory=_triggerCategory - In the implementation block
@property (nonatomic,readonly) NSDictionary * triggerAttributes;                  //@synthesize triggerAttributes=_triggerAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)getSearchTerm:(id)arg1 ;
+(id)getGivenNameQualifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToTrigger:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSourceType:(unsigned long long)arg1 category:(id)arg2 attributes:(id)arg3 ;
-(unsigned long long)triggerSourceType;
-(NSString *)triggerCategory;
-(NSDictionary *)triggerAttributes;
@end

