/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, LPImage;

@interface LPAssociatedApplicationMetadata : NSObject <NSSecureCoding, NSCopying> {

	NSString* _bundleIdentifier;
	LPImage* _icon;
	NSString* _caption;
	NSString* _action;
	long long _clipAction;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) LPImage * icon;                         //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * caption;                       //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSString * action;                        //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) long long clipAction;                   //@synthesize clipAction=_clipAction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(long long)clipAction;
-(void)setClipAction:(long long)arg1 ;
-(LPImage *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setIcon:(LPImage *)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

