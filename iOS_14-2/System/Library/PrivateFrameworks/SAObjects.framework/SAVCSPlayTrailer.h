/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class NSString, NSURL, SAUIImageResource;

@interface SAVCSPlayTrailer : SAAceView

@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSURL * hiresTrailerUri; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSURL * lowresTrailerUri; 
@property (nonatomic,copy) NSURL * url; 
@property (nonatomic,copy) NSString * utsId; 
+(id)playTrailerWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)playTrailer;
-(id)groupIdentifier;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(id)encodedClassName;
-(NSString *)utsId;
-(NSString *)contentType;
-(NSURL *)url;
-(SAUIImageResource *)image;
-(NSURL *)hiresTrailerUri;
-(void)setHiresTrailerUri:(NSURL *)arg1 ;
-(NSURL *)lowresTrailerUri;
-(void)setLowresTrailerUri:(NSURL *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(void)setUtsId:(NSString *)arg1 ;
@end

