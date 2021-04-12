/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface WFTableTemplateValue : NSObject <NSSecureCoding> {

	long long _compoundType;
	NSArray* _rows;

}

@property (nonatomic,readonly) long long compoundType;              //@synthesize compoundType=_compoundType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rows;                 //@synthesize rows=_rows - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)rows;
-(id)initWithCoder:(id)arg1 ;
-(long long)compoundType;
-(id)initWithCompoundType:(long long)arg1 rows:(id)arg2 ;
@end

