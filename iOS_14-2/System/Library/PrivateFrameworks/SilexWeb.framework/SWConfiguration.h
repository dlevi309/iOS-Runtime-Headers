/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <SilexWeb/SilexWeb-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol SWLocation;
@class NSString, NSLocale, NSDictionary, NSURL;

@interface SWConfiguration : NSObject <NSMutableCopying> {

	NSString* _identifier;
	NSString* _storeFront;
	NSLocale* _locale;
	NSString* _contentSizeCategory;
	NSDictionary* _dataSources;
	id<SWLocation> _location;
	NSURL* _sourceURL;
	NSString* _systemVersion;
	CGSize _canvasSize;
	CGRect _contentFrame;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * storeFront;                       //@synthesize storeFront=_storeFront - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;              //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) CGSize canvasSize;                         //@synthesize canvasSize=_canvasSize - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                       //@synthesize contentFrame=_contentFrame - In the implementation block
@property (nonatomic,copy) NSDictionary * dataSources;                  //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,copy) id<SWLocation> location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                           //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) NSString * systemVersion;                    //@synthesize systemVersion=_systemVersion - In the implementation block
-(NSDictionary *)dataSources;
-(CGRect)contentFrame;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSString *)systemVersion;
-(void)setContentFrame:(CGRect)arg1 ;
-(id)initWithStoreFront:(id)arg1 locale:(id)arg2 contentSizeCategory:(id)arg3 canvasSize:(CGSize)arg4 contentFrame:(CGRect)arg5 dataSources:(id)arg6 location:(id)arg7 sourceURL:(id)arg8 ;
-(NSURL *)sourceURL;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSString *)storeFront;
-(id<SWLocation>)location;
-(void)setStoreFront:(NSString *)arg1 ;
-(void)setSystemVersion:(NSString *)arg1 ;
-(void)setDataSources:(NSDictionary *)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)contentSizeCategory;
-(void)setLocation:(id<SWLocation>)arg1 ;
-(CGSize)canvasSize;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCanvasSize:(CGSize)arg1 ;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
@end

