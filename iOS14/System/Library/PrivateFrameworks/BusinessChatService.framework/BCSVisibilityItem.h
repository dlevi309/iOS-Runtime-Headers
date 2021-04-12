/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BCSVisibilityItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _language;
	NSString* _country;
	double _ratio;

}

@property (nonatomic,readonly) NSString * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) NSString * country;               //@synthesize country=_country - In the implementation block
@property (nonatomic,readonly) double ratio;                     //@synthesize ratio=_ratio - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)country;
-(void)encodeWithCoder:(id)arg1 ;
-(double)ratio;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(id)initWithVisibility:(id)arg1 ;
-(id)initWithLanguage:(id)arg1 country:(id)arg2 ratio:(double)arg3 ;
-(BOOL)isVisibleForDSID:(id)arg1 ;
@end

