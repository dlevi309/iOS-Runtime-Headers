/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/

#import <InputContext/InputContext-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSDictionary;

@interface _ICProactiveTrigger : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _triggerSourceType;
	NSSet* _availableApps;
	NSDictionary* _attributedString;

}

@property (nonatomic,readonly) unsigned char triggerSourceType;              //@synthesize triggerSourceType=_triggerSourceType - In the implementation block
@property (nonatomic,retain) NSSet * availableApps;                          //@synthesize availableApps=_availableApps - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)attributedString;
-(BOOL)isEqualToProactiveTrigger:(id)arg1 ;
-(unsigned char)triggerSourceType;
-(id)initWithSource:(unsigned char)arg1 attributes:(id)arg2 ;
-(NSSet *)availableApps;
-(void)setAvailableApps:(NSSet *)arg1 ;
@end

