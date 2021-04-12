/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)jsonData;
-(double)pixelWidth;
-(void)setPixelWidth:(double)arg1;
-(double)pixelHeight;
-(void)setPixelHeight:(double)arg1;
-(NSString *)formatURL;
-(void)setFormatURL:(id)arg1;
-(BOOL)supportsResizing;
-(void)setSupportsResizing:(BOOL)arg1;
-(NSArray *)imageOptions;
-(void)setImageOptions:(id)arg1;

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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double pixelWidth;                                      //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (assign,nonatomic) double pixelHeight;                                     //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,copy) NSString * formatURL;                                     //@synthesize formatURL=_formatURL - In the implementation block
@property (assign,nonatomic) BOOL supportsResizing;                                  //@synthesize supportsResizing=_supportsResizing - In the implementation block
@property (nonatomic,copy) NSArray * imageOptions;                                   //@synthesize imageOptions=_imageOptions - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(double)pixelWidth;
-(void)setPixelWidth:(double)arg1 ;
-(double)pixelHeight;
-(void)setPixelHeight:(double)arg1 ;
-(NSString *)formatURL;
-(void)setFormatURL:(NSString *)arg1 ;
-(BOOL)supportsResizing;
-(void)setSupportsResizing:(BOOL)arg1 ;
-(NSArray *)imageOptions;
-(void)setImageOptions:(NSArray *)arg1 ;
-(BOOL)hasPixelWidth;
-(BOOL)hasPixelHeight;
-(BOOL)hasSupportsResizing;
-(id)_sf_urlForSettings:(id)arg1 shouldResize:(BOOL)arg2 width:(double)arg3 height:(double)arg4 ;
-(id)_sf_replacementStringForPropertyEntryKey:(id)arg1 value:(id)arg2 ;
-(id)sf_urlForSettings:(id)arg1 ;
-(id)sf_urlForSettings:(id)arg1 size:(CGSize)arg2 ;
@end

