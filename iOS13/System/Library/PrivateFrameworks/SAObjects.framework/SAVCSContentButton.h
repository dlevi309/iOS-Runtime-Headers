/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUIButton.h>

@class NSString, NSArray, NSURL;

@interface SAVCSContentButton : SAUIButton

@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSArray * togglePlayPauseCommands; 
@property (nonatomic,copy) NSURL * url; 
+(id)contentButton;
+(id)contentButtonWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)url;
-(id)groupIdentifier;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)encodedClassName;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(NSArray *)togglePlayPauseCommands;
-(void)setTogglePlayPauseCommands:(NSArray *)arg1 ;
@end

