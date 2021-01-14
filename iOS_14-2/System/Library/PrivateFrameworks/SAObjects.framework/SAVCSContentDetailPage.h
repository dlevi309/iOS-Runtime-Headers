/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class NSString, SAUIImageResource, NSURL;

@interface SAVCSContentDetailPage : SAAceView

@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSString * imagesJsonContentPayload; 
@property (assign,nonatomic) BOOL isEvod; 
@property (nonatomic,copy) NSString * loadingText; 
@property (nonatomic,copy) NSString * seasonId; 
@property (nonatomic,copy) NSString * showId; 
@property (nonatomic,copy) NSURL * url; 
@property (assign,nonatomic) BOOL userDriven; 
@property (nonatomic,copy) NSString * utsId; 
@property (nonatomic,copy) NSURL * utsSearchUrl; 
+(id)contentDetailPage;
+(id)contentDetailPageWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(id)encodedClassName;
-(NSString *)utsId;
-(NSString *)showId;
-(NSString *)contentType;
-(BOOL)isEvod;
-(NSURL *)url;
-(SAUIImageResource *)image;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(NSString *)loadingText;
-(NSString *)seasonId;
-(void)setIsEvod:(BOOL)arg1 ;
-(NSString *)imagesJsonContentPayload;
-(void)setImagesJsonContentPayload:(NSString *)arg1 ;
-(void)setLoadingText:(NSString *)arg1 ;
-(void)setSeasonId:(NSString *)arg1 ;
-(void)setShowId:(NSString *)arg1 ;
-(BOOL)userDriven;
-(void)setUserDriven:(BOOL)arg1 ;
-(void)setUtsId:(NSString *)arg1 ;
-(NSURL *)utsSearchUrl;
-(void)setUtsSearchUrl:(NSURL *)arg1 ;
@end

