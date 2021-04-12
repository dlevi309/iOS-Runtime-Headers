/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBAppLink.h>
@class NSString, _SFPBPunchout, _SFPBImage, NSData;


@protocol _SFPBAppLink <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) _SFPBPunchout * appPunchout; 
@property (nonatomic,retain) _SFPBImage * image; 
@property (assign,nonatomic) int imageAlign; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setImage:(id)arg1;
-(int)imageAlign;
-(void)setImageAlign:(int)arg1;
-(void)setAppPunchout:(id)arg1;
-(_SFPBPunchout *)appPunchout;
-(NSData *)jsonData;
-(void)setTitle:(id)arg1;
-(_SFPBImage *)image;
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSString *)title;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBPunchout, _SFPBImage, NSData;

@interface _SFPBAppLink : PBCodable <_SFPBAppLink, NSSecureCoding> {

	int _imageAlign;
	NSString* _title;
	_SFPBPunchout* _appPunchout;
	_SFPBImage* _image;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) _SFPBPunchout * appPunchout;              //@synthesize appPunchout=_appPunchout - In the implementation block
@property (nonatomic,retain) _SFPBImage * image;                       //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) int imageAlign;                           //@synthesize imageAlign=_imageAlign - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setImage:(_SFPBImage *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(int)imageAlign;
-(void)setImageAlign:(int)arg1 ;
-(void)setAppPunchout:(_SFPBPunchout *)arg1 ;
-(_SFPBPunchout *)appPunchout;
-(NSData *)jsonData;
-(void)setTitle:(NSString *)arg1 ;
-(_SFPBImage *)image;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

