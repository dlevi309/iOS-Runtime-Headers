/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSNumber, NSArray;

@interface SAVCSContentCabinet : SAUISnippet

@property (assign,nonatomic) BOOL browseResults; 
@property (nonatomic,copy) NSNumber * fullScreenEnabled; 
@property (nonatomic,copy) NSArray * shelves; 
+(id)contentCabinet;
+(id)contentCabinetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setShelves:(NSArray *)arg1 ;
-(BOOL)browseResults;
-(void)setBrowseResults:(BOOL)arg1 ;
-(NSNumber *)fullScreenEnabled;
-(void)setFullScreenEnabled:(NSNumber *)arg1 ;
-(NSArray *)shelves;
@end

