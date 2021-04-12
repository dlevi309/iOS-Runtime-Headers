/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)rows;
-(long long)compoundType;
-(id)initWithCompoundType:(long long)arg1 rows:(id)arg2 ;
@end

