/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMode:(NSDictionary *)arg1 ;
-(NSString *)uuid;
-(NSDictionary *)mode;
-(void)setUuid:(NSString *)arg1 ;
@end

