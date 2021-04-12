/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)localizedTitle;
-(NSString *)titleKey;
-(void)setTitleKey:(NSString *)arg1 ;
-(NSDictionary *)actionInfo;
-(void)localizeWithBundle:(id)arg1 ;
-(void)setActionInfo:(NSDictionary *)arg1 ;
@end

