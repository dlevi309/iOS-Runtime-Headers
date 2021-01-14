/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage;

@interface SFCustomActivityProxy : NSObject <NSCopying, NSSecureCoding> {

	NSString* _activityType;
	NSString* _activityTitle;
	UIImage* _activityImage;
	unsigned long long _activityProxyID;

}

@property (nonatomic,readonly) NSString * activityType;                         //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSString * activityTitle;                        //@synthesize activityTitle=_activityTitle - In the implementation block
@property (nonatomic,readonly) UIImage * activityImage;                         //@synthesize activityImage=_activityImage - In the implementation block
@property (nonatomic,readonly) unsigned long long activityProxyID;              //@synthesize activityProxyID=_activityProxyID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)activityType;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)activityProxyID;
-(id)initWithActivity:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)activityTypeWithActivity:(id)arg1 ;
-(id)_initWithActivityType:(id)arg1 title:(id)arg2 image:(id)arg3 proxyID:(unsigned long long)arg4 ;
-(NSString *)activityTitle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIImage *)activityImage;
@end

