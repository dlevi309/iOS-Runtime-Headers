/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AppClip.framework/AppClip
*/

#import <AppClip/AppClip-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface APActivationPayload : NSObject <NSSecureCoding, NSCopying> {

	NSURL* _URL;

}

@property (nonatomic,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)confirmAcquiredInRegion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

