/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFDynamicURLImageResource.h>
@class NSString, NSArray, NSDictionary, NSData;


@protocol SFDynamicURLImageResource <NSObject>
@property (assign,nonatomic) double pixelWidth; 
@property (assign,nonatomic) double pixelHeight; 
@property (nonatomic,copy) NSString * formatURL; 
@property (assign,nonatomic) BOOL supportsResizing; 
@property (nonatomic,copy) NSArray * imageOptions; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)imageOptions;
-(NSString *)formatURL;
-(void)setFormatURL:(id)arg1;
-(BOOL)supportsResizing;
-(void)setSupportsResizing:(BOOL)arg1;
-(void)setImageOptions:(id)arg1;
-(NSData *)jsonData;
-(void)setPixelHeight:(double)arg1;
-(void)setPixelWidth:(double)arg1;
-(double)pixelHeight;
-(double)pixelWidth;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSData;

@interface SFDynamicURLImageResource : NSObject <SFDynamicURLImageResource, NSSecureCoding, NSCopying> {

	SCD_Struct_SF3 _has;
	BOOL _supportsResizing;
	double _pixelWidth;
	double _pixelHeight;
	NSString* _formatURL;
	NSArray* _imageOptions;

}

@property (assign,nonatomic) double pixelWidth;                                      //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (assign,nonatomic) double pixelHeight;                                     //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,copy) NSString * formatURL;                                     //@synthesize formatURL=_formatURL - In the implementation block
@property (assign,nonatomic) BOOL supportsResizing;                                  //@synthesize supportsResizing=_supportsResizing - In the implementation block
@property (nonatomic,copy) NSArray * imageOptions;                                   //@synthesize imageOptions=_imageOptions - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)imageOptions;
-(NSString *)formatURL;
-(void)setFormatURL:(NSString *)arg1 ;
-(BOOL)supportsResizing;
-(void)setSupportsResizing:(BOOL)arg1 ;
-(void)setImageOptions:(NSArray *)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasPixelWidth;
-(BOOL)hasPixelHeight;
-(BOOL)hasSupportsResizing;
-(void)setPixelHeight:(double)arg1 ;
-(void)setPixelWidth:(double)arg1 ;
-(id)_sf_urlForSettings:(id)arg1 shouldResize:(BOOL)arg2 width:(double)arg3 height:(double)arg4 ;
-(id)_sf_replacementStringForPropertyEntryKey:(id)arg1 value:(id)arg2 ;
-(id)sf_urlForSettings:(id)arg1 ;
-(id)sf_urlForSettings:(id)arg1 size:(CGSize)arg2 ;
-(double)pixelHeight;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)pixelWidth;
@end

