/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PSYTestInput : NSObject <NSSecureCoding> {

	long long _action;

}

@property (assign,nonatomic) long long action;              //@synthesize action=_action - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)testInputWithAction:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

