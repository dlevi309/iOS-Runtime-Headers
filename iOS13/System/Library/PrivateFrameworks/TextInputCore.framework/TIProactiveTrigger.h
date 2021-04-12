/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)attributes;
-(unsigned char)triggerSourceType;
-(id)initWithSourceType:(unsigned char)arg1 attributes:(id)arg2 ;
@end

