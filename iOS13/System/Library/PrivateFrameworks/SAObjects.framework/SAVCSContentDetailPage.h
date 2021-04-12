/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)url;
-(id)groupIdentifier;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(SAUIImageResource *)image;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)encodedClassName;
-(NSString *)loadingText;
-(void)setLoadingText:(NSString *)arg1 ;
-(BOOL)isEvod;
-(void)setIsEvod:(BOOL)arg1 ;
-(NSString *)imagesJsonContentPayload;
-(void)setImagesJsonContentPayload:(NSString *)arg1 ;
-(NSString *)seasonId;
-(void)setSeasonId:(NSString *)arg1 ;
-(NSString *)showId;
-(void)setShowId:(NSString *)arg1 ;
-(BOOL)userDriven;
-(void)setUserDriven:(BOOL)arg1 ;
-(NSString *)utsId;
-(void)setUtsId:(NSString *)arg1 ;
-(NSURL *)utsSearchUrl;
-(void)setUtsSearchUrl:(NSURL *)arg1 ;
@end

