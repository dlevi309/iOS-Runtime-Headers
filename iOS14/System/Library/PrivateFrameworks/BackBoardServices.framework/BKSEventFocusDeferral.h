/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BKSEventFocusDeferralProperties;

@interface BKSEventFocusDeferral : NSObject <NSSecureCoding> {

	int _priority;
	BKSEventFocusDeferralProperties* _properties;
	BKSEventFocusDeferralProperties* _deferredProperties;

}

@property (nonatomic,readonly) BKSEventFocusDeferralProperties * properties;                      //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) BKSEventFocusDeferralProperties * deferredProperties;              //@synthesize deferredProperties=_deferredProperties - In the implementation block
@property (nonatomic,readonly) int priority;                                                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) BOOL isCycle; 
+(BOOL)supportsSecureCoding;
-(BKSEventFocusDeferralProperties *)properties;
-(id)initWithProperties:(id)arg1 deferredProperties:(id)arg2 ;
-(BOOL)defersProperties:(id)arg1 ;
-(id)initWithProperties:(id)arg1 deferredProperties:(id)arg2 withPriority:(int)arg3 ;
-(BKSEventFocusDeferralProperties *)deferredProperties;
-(id)deferredPropertiesForProperties:(id)arg1 ;
-(BOOL)isCycle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)conciseDescription;
-(int)priority;
-(BOOL)isEqual:(id)arg1 ;
@end

