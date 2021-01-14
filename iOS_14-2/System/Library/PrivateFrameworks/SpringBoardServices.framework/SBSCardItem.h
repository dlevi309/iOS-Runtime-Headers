/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDictionary, UIImage;

@interface SBSCardItem : NSObject <NSCopying, NSSecureCoding> {

	BOOL _requiresPasscode;
	NSString* _identifier;
	NSString* _categoryIdentifier;
	NSData* _iconData;
	NSString* _title;
	NSString* _subtitle;
	NSString* _body;
	NSString* _bundleName;
	NSDictionary* _userInfo;
	UIImage* _thumbnail;

}

@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * categoryIdentifier;              //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,copy) NSData * iconData;                          //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * body;                            //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) BOOL requiresPasscode;                    //@synthesize requiresPasscode=_requiresPasscode - In the implementation block
@property (nonatomic,copy) NSString * bundleName;                      //@synthesize bundleName=_bundleName - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                    //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) UIImage * thumbnail;                        //@synthesize thumbnail=_thumbnail - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)body;
-(NSString *)categoryIdentifier;
-(NSDictionary *)userInfo;
-(UIImage *)thumbnail;
-(NSData *)iconData;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)bundleName;
-(id)description;
-(id)sortDate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIconData:(NSData *)arg1 ;
-(BOOL)requiresPasscode;
-(void)setRequiresPasscode:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 categoryIdentifier:(id)arg2 iconData:(id)arg3 title:(id)arg4 subtitle:(id)arg5 body:(id)arg6 requiresPasscode:(BOOL)arg7 bundleName:(id)arg8 userInfo:(id)arg9 ;
-(id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 requiresPasscode:(BOOL)arg5 bundleName:(id)arg6 userInfo:(id)arg7 ;
-(void)setThumbnail:(UIImage *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end
