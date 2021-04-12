/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedDataReset.framework/EmbeddedDataReset
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class DDRResetOptions, NSString;

@interface DDRResetRequest : NSObject <NSSecureCoding> {

	long long _mode;
	DDRResetOptions* _options;
	NSString* _reason;

}

@property (nonatomic,readonly) long long mode;                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) DDRResetOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                 //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
-(DDRResetOptions *)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(long long)mode;
-(id)initWithMode:(long long)arg1 options:(id)arg2 reason:(id)arg3 ;
@end

