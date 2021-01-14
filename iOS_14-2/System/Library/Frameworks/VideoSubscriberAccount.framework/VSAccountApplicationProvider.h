/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VSAccountApplicationProvider : NSObject <NSCopying, NSSecureCoding> {

	NSString* _localizedDisplayName;
	NSString* _identifier;
	NSString* _displayName;

}

@property (nonatomic,copy) NSString * displayName;                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)localizedDisplayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLocalizedDisplayName:(id)arg1 identifier:(id)arg2 ;
@end

