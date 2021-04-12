/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <SilexWeb/SilexWeb-Structs.h>
#import <SilexWeb/SWConfiguration.h>

@class NSString, NSLocale, NSDictionary, NSURL;

@interface SWMutableConfiguration : SWConfiguration {

	NSString* storeFront;
	NSLocale* locale;
	NSString* contentSizeCategory;
	NSDictionary* dataSources;
	NSURL* location;
	CGSize canvasSize;
	CGRect contentFrame;

}

@property (nonatomic,copy) NSString * storeFront; 
@property (nonatomic,copy) NSLocale * locale; 
@property (nonatomic,copy) NSString * contentSizeCategory; 
@property (assign,nonatomic) CGSize canvasSize; 
@property (assign,nonatomic) CGRect contentFrame; 
@property (nonatomic,copy) NSDictionary * dataSources; 
@property (nonatomic,copy) NSURL * location; 
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSString *)storeFront;
-(NSURL *)location;
-(CGRect)contentFrame;
-(NSDictionary *)dataSources;
-(void)setLocation:(NSURL *)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(void)setContentFrame:(CGRect)arg1 ;
-(CGSize)canvasSize;
-(void)setCanvasSize:(CGSize)arg1 ;
-(void)setDataSources:(NSDictionary *)arg1 ;
-(void)setStoreFront:(NSString *)arg1 ;
@end

