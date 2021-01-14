/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSSecureCoding;
@class NSNumber;

@interface WFGranularAccessResourcePerWorkflowStateEntry : NSObject <NSSecureCoding> {

	id<NSObject><NSSecureCoding> _value;
	NSNumber* _authorized;

}

@property (nonatomic,readonly) id<NSObject><NSSecureCoding> value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSNumber * authorized;                           //@synthesize authorized=_authorized - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)valueKey;
+(Class)valueTypeClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(NSNumber *)authorized;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject><NSSecureCoding>)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithValue:(id)arg1 authorized:(id)arg2 ;
-(id)entryBySettingAuthorized:(BOOL)arg1 ;
@end

