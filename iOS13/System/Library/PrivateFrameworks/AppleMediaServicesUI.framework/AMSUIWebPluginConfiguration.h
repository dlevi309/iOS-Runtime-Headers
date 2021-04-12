/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
@end

