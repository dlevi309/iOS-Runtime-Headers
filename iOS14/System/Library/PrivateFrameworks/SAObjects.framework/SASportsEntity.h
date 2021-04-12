/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSURL, NSDictionary, SASportsLeague, NSString, SAUIAppPunchOut, NSArray;

@interface SASportsEntity : SADomainObject

@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSDictionary * images; 
@property (nonatomic,copy) NSURL * largeImage; 
@property (nonatomic,copy) NSDictionary * largeImages; 
@property (nonatomic,retain) SASportsLeague * league; 
@property (nonatomic,copy) NSURL * listImage; 
@property (nonatomic,copy) NSDictionary * listImages; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAUIAppPunchOut * punchout; 
@property (nonatomic,copy) NSArray * themeImages; 
+(id)entity;
+(id)entityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setImage:(NSURL *)arg1 ;
-(void)setPunchout:(SAUIAppPunchOut *)arg1 ;
-(SASportsLeague *)league;
-(id)encodedClassName;
-(void)setImages:(NSDictionary *)arg1 ;
-(NSURL *)image;
-(NSString *)name;
-(NSArray *)themeImages;
-(void)setThemeImages:(NSArray *)arg1 ;
-(SAUIAppPunchOut *)punchout;
-(NSDictionary *)images;
-(void)setName:(NSString *)arg1 ;
-(NSURL *)largeImage;
-(void)setLargeImage:(NSURL *)arg1 ;
-(NSDictionary *)largeImages;
-(void)setLargeImages:(NSDictionary *)arg1 ;
-(void)setLeague:(SASportsLeague *)arg1 ;
-(NSURL *)listImage;
-(void)setListImage:(NSURL *)arg1 ;
-(NSDictionary *)listImages;
-(void)setListImages:(NSDictionary *)arg1 ;
@end

