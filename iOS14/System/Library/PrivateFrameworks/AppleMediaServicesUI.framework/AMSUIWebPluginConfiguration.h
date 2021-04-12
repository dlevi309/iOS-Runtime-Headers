/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AMSUIWebPluginConfiguration : NSObject <NSSecureCoding> {

	NSString* _logKey;

}

@property (nonatomic,retain) NSString * logKey;              //@synthesize logKey=_logKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)logKey;
@end

