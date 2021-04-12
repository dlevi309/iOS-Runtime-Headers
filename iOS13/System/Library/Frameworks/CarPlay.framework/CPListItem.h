/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CPImageSet, NSUUID, UIImage;

@interface CPListItem : NSObject <NSSecureCoding> {

	BOOL _showsDisclosureIndicator;
	NSString* _text;
	NSString* _detailText;
	id _userInfo;
	CPImageSet* _imageSet;
	NSUUID* _identifier;

}

@property (nonatomic,retain) CPImageSet * imageSet;                        //@synthesize imageSet=_imageSet - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                       //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * detailText;                 //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) BOOL showsDisclosureIndicator;              //@synthesize showsDisclosureIndicator=_showsDisclosureIndicator - In the implementation block
@property (nonatomic,retain) id userInfo;                                  //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setUserInfo:(id)arg1 ;
-(UIImage *)image;
-(NSString *)text;
-(NSString *)detailText;
-(BOOL)showsDisclosureIndicator;
-(CPImageSet *)imageSet;
-(void)setImageSet:(CPImageSet *)arg1 ;
-(id)initWithText:(id)arg1 detailText:(id)arg2 ;
-(id)initWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 ;
-(id)initWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showsDisclosureIndicator:(BOOL)arg4 ;
@end

