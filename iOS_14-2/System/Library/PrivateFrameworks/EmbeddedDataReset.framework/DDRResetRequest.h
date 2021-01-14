/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)mode;
-(void)encodeWithCoder:(id)arg1 ;
-(DDRResetOptions *)options;
-(NSString *)reason;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMode:(long long)arg1 options:(id)arg2 reason:(id)arg3 ;
@end

