/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)playTrailer;
-(void)setPlayTrailer:(BOOL)arg1 ;
-(NSURL *)hiresTrailerUri;
-(void)setHiresTrailerUri:(NSURL *)arg1 ;
-(NSURL *)lowresTrailerUri;
-(void)setLowresTrailerUri:(NSURL *)arg1 ;
-(NSString *)utsId;
-(void)setUtsId:(NSString *)arg1 ;
@end

