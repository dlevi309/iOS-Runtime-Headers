/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(SFImage *)image;
-(void)setImage:(id)arg1;
-(NSData *)jsonData;
-(int)imageAlign;
-(void)setImageAlign:(int)arg1;
-(SFPunchout *)appPunchout;
-(void)setAppPunchout:(id)arg1;

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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) SFPunchout * appPunchout;                               //@synthesize appPunchout=_appPunchout - In the implementation block
@property (nonatomic,retain) SFImage * image;                                        //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) int imageAlign;                                         //@synthesize imageAlign=_imageAlign - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(SFImage *)image;
-(void)setImage:(SFImage *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(int)imageAlign;
-(void)setImageAlign:(int)arg1 ;
-(BOOL)hasImageAlign;
-(SFPunchout *)appPunchout;
-(void)setAppPunchout:(SFPunchout *)arg1 ;
@end

