/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface TIProactiveTrigger : NSObject <NSCopying> {

	unsigned char _triggerSourceType;
	NSDictionary* _attributes;

}

@property (nonatomic,readonly) unsigned char triggerSourceType;              //@synthesize triggerSourceType=_triggerSourceType - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes;                    //@synthesize attributes=_attributes - In the implementation block
-(NSDictionary *)attributes;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned char)triggerSourceType;
-(id)initWithSourceType:(unsigned char)arg1 attributes:(id)arg2 ;
@end

