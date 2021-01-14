/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFAppLink.h>
@class NSString, SFPunchout, SFImage, NSDictionary, NSData;


@protocol SFAppLink <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) SFPunchout * appPunchout; 
@property (nonatomic,retain) SFImage * image; 
@property (assign,nonatomic) int imageAlign; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setImage:(id)arg1;
-(int)imageAlign;
-(void)setImageAlign:(int)arg1;
-(void)setAppPunchout:(id)arg1;
-(SFPunchout *)appPunchout;
-(NSData *)jsonData;
-(void)setTitle:(id)arg1;
-(SFImage *)image;
-(NSString *)title;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SFPunchout, SFImage, NSDictionary, NSData;

@interface SFAppLink : NSObject <SFAppLink, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _imageAlign;
	NSString* _title;
	SFPunchout* _appPunchout;
	SFImage* _image;

}

@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) SFPunchout * appPunchout;                               //@synthesize appPunchout=_appPunchout - In the implementation block
@property (nonatomic,retain) SFImage * image;                                        //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) int imageAlign;                                         //@synthesize imageAlign=_imageAlign - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)setImage:(SFImage *)arg1 ;
-(int)imageAlign;
-(BOOL)hasImageAlign;
-(void)setImageAlign:(int)arg1 ;
-(void)setAppPunchout:(SFPunchout *)arg1 ;
-(SFPunchout *)appPunchout;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(SFImage *)image;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

