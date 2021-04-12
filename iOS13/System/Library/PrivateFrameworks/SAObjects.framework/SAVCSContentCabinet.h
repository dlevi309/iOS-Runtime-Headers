/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)fullScreenEnabled;
-(void)setFullScreenEnabled:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSArray *)shelves;
-(void)setShelves:(NSArray *)arg1 ;
-(BOOL)browseResults;
-(void)setBrowseResults:(BOOL)arg1 ;
@end

