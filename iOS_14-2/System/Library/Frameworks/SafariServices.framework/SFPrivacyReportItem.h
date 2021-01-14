/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SFPrivacyReportItem : NSObject <NSCopying> {

	long long _type;
	id _userInfo;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id userInfo;                 //@synthesize userInfo=_userInfo - In the implementation block
-(id)initWithType:(long long)arg1 ;
-(id)userInfo;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithType:(long long)arg1 userInfo:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

