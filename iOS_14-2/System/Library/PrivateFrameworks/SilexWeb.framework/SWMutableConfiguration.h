/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <SilexWeb/SilexWeb-Structs.h>
#import <SilexWeb/SWConfiguration.h>

@protocol SWLocation;
@class NSString, NSLocale, NSDictionary, NSURL;

@interface SWMutableConfiguration : SWConfiguration {

	NSString* storeFront;
	NSLocale* locale;
	NSString* contentSizeCategory;
	NSDictionary* dataSources;
	id<SWLocation> location;
	NSURL* sourceURL;
	CGSize canvasSize;
	CGRect contentFrame;

}

@property (nonatomic,copy) NSString * storeFront; 
@property (nonatomic,copy) NSLocale * locale; 
@property (nonatomic,copy) NSString * contentSizeCategory; 
@property (assign,nonatomic) CGSize canvasSize; 
@property (assign,nonatomic) CGRect contentFrame; 
@property (nonatomic,copy) NSDictionary * dataSources; 
@property (nonatomic,copy) id<SWLocation> location; 
@property (nonatomic,copy) NSURL * sourceURL; 
-(NSDictionary *)dataSources;
-(CGRect)contentFrame;
-(void)setSourceURL:(NSURL *)arg1 ;
-(void)setContentFrame:(CGRect)arg1 ;
-(NSURL *)sourceURL;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSString *)storeFront;
-(id<SWLocation>)location;
-(void)setStoreFront:(NSString *)arg1 ;
-(void)setDataSources:(NSDictionary *)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(void)setLocation:(id<SWLocation>)arg1 ;
-(CGSize)canvasSize;
-(void)setCanvasSize:(CGSize)arg1 ;
@end

