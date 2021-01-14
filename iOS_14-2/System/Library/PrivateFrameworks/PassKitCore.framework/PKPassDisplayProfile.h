/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKDisplayProfile.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKColor, NSData;

@interface PKPassDisplayProfile : PKDisplayProfile <NSSecureCoding, NSCopying> {

	BOOL _tallCode;
	BOOL _hasBackgroundImage;
	BOOL _hasStripImage;
	long long _passStyle;
	PKColor* _backgroundColor;
	PKColor* _secondaryBackgroundColor;
	PKColor* _foregroundColor;
	PKColor* _labelColor;
	PKColor* _stripColor;
	NSData* _manifestHash;

}

@property (assign,nonatomic) long long passStyle;                             //@synthesize passStyle=_passStyle - In the implementation block
@property (nonatomic,retain) PKColor * backgroundColor;                       //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) PKColor * secondaryBackgroundColor;              //@synthesize secondaryBackgroundColor=_secondaryBackgroundColor - In the implementation block
@property (nonatomic,retain) PKColor * foregroundColor;                       //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) PKColor * labelColor;                            //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) PKColor * stripColor;                            //@synthesize stripColor=_stripColor - In the implementation block
@property (nonatomic,retain) NSData * manifestHash;                           //@synthesize manifestHash=_manifestHash - In the implementation block
@property (assign,nonatomic) BOOL tallCode;                                   //@synthesize tallCode=_tallCode - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundImage;                         //@synthesize hasBackgroundImage=_hasBackgroundImage - In the implementation block
@property (assign,nonatomic) BOOL hasStripImage;                              //@synthesize hasStripImage=_hasStripImage - In the implementation block
@property (nonatomic,readonly) BOOL showsBackgroundImage; 
@property (nonatomic,readonly) BOOL showsStripImage; 
@property (nonatomic,readonly) long long layoutMode; 
+(BOOL)supportsSecureCoding;
-(void)setForegroundColor:(PKColor *)arg1 ;
-(PKColor *)foregroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLabelColor:(PKColor *)arg1 ;
-(void)setBackgroundColor:(PKColor *)arg1 ;
-(void)setPassStyle:(long long)arg1 ;
-(void)setSecondaryBackgroundColor:(PKColor *)arg1 ;
-(void)setStripColor:(PKColor *)arg1 ;
-(void)setTallCode:(BOOL)arg1 ;
-(BOOL)showsBackgroundImage;
-(BOOL)showsStripImage;
-(PKColor *)secondaryBackgroundColor;
-(BOOL)hasBackgroundImage;
-(void)setHasBackgroundImage:(BOOL)arg1 ;
-(BOOL)hasStripImage;
-(void)setHasStripImage:(BOOL)arg1 ;
-(PKColor *)backgroundColor;
-(PKColor *)labelColor;
-(BOOL)tallCode;
-(long long)passStyle;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(long long)layoutMode;
-(void)setManifestHash:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PKColor *)stripColor;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(NSData *)manifestHash;
@end

