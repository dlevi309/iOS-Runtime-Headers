/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HKSPAnalyticsWindDownEventData : NSObject <NSCoding, NSSecureCoding> {

	BOOL _wasUsed;
	BOOL _wasCollected;
	unsigned long long _action;
	NSString* _identifier;

}

@property (nonatomic,readonly) unsigned long long action;               //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL wasUsed;                            //@synthesize wasUsed=_wasUsed - In the implementation block
@property (nonatomic,readonly) BOOL wasCollected;                       //@synthesize wasCollected=_wasCollected - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)action;
-(BOOL)wasUsed;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)wasCollected;
-(id)collectedEventDataCopy;
-(id)initWithWindDownAction:(unsigned long long)arg1 wasUsed:(BOOL)arg2 identifier:(id)arg3 wasCollected:(BOOL)arg4 ;
-(BOOL)isEqualEventData:(id)arg1 ;
-(id)initWithWindDownAction:(unsigned long long)arg1 wasUsed:(BOOL)arg2 identifier:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

