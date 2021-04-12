/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface PKDiscoveryEngagementMessageAction : NSObject <NSSecureCoding, NSCopying> {

	NSString* _titleKey;
	long long _type;
	NSDictionary* _actionInfo;
	NSString* _localizedTitle;

}

@property (nonatomic,retain) NSString * titleKey;                      //@synthesize titleKey=_titleKey - In the implementation block
@property (assign,nonatomic) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDictionary * actionInfo;                //@synthesize actionInfo=_actionInfo - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)localizedTitle;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)actionInfo;
-(void)setType:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)titleKey;
-(id)description;
-(void)setTitleKey:(NSString *)arg1 ;
-(void)localizeWithBundle:(id)arg1 ;
-(void)setActionInfo:(NSDictionary *)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

