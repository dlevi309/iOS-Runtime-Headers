/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAUIImageResource, NSDate;

@interface SAWLWatchListSearchResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,retain) SAUIImageResource * evodFeaturingImage; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (assign,nonatomic) BOOL isEvod; 
@property (nonatomic,copy) NSString * network; 
@property (nonatomic,copy) NSDate * releaseDate; 
@property (nonatomic,copy) NSString * shelfType; 
@property (nonatomic,copy) NSString * studio; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)watchListSearchResult;
+(id)watchListSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)releaseDate;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(id)groupIdentifier;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(id)encodedClassName;
-(NSString *)network;
-(NSString *)contentType;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEvod;
-(NSString *)studio;
-(SAUIImageResource *)image;
-(void)setContentType:(NSString *)arg1 ;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(SAUIImageResource *)evodFeaturingImage;
-(void)setEvodFeaturingImage:(SAUIImageResource *)arg1 ;
-(void)setIsEvod:(BOOL)arg1 ;
-(NSString *)shelfType;
-(void)setShelfType:(NSString *)arg1 ;
-(void)setStudio:(NSString *)arg1 ;
-(void)setNetwork:(NSString *)arg1 ;
-(NSString *)title;
@end

