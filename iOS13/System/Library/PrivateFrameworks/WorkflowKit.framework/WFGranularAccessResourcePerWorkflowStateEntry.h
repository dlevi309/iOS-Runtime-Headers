/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject><NSSecureCoding>)value;
-(id)initWithValue:(id)arg1 ;
-(NSNumber *)authorized;
-(id)initWithValue:(id)arg1 authorized:(id)arg2 ;
-(id)entryBySettingAuthorized:(BOOL)arg1 ;
@end

