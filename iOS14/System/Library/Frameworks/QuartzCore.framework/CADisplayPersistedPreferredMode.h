/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface CADisplayPersistedPreferredMode : NSObject <NSSecureCoding> {

	NSString* _uuid;
	NSDictionary* _mode;

}

@property (nonatomic,copy) NSString * uuid;                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSDictionary * mode;              //@synthesize mode=_mode - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)mode;
-(NSString *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMode:(NSDictionary *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)dealloc;
@end

