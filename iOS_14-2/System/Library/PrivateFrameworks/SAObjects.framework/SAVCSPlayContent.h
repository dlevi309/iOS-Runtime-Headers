/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSURL;

@interface SAVCSPlayContent : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSURL * hiresTrailerUri; 
@property (nonatomic,copy) NSURL * lowresTrailerUri; 
@property (assign,nonatomic) BOOL playTrailer; 
@property (nonatomic,copy) NSString * utsId; 
+(id)playContent;
+(id)playContentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)utsId;
-(BOOL)requiresResponse;
-(NSString *)contentType;
-(BOOL)playTrailer;
-(void)setPlayTrailer:(BOOL)arg1 ;
-(NSURL *)hiresTrailerUri;
-(void)setHiresTrailerUri:(NSURL *)arg1 ;
-(NSURL *)lowresTrailerUri;
-(void)setLowresTrailerUri:(NSURL *)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(void)setUtsId:(NSString *)arg1 ;
@end

