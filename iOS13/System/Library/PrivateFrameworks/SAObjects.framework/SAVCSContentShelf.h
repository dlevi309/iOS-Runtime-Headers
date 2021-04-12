/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString, NSURL;

@interface SAVCSContentShelf : SAAceView

@property (nonatomic,copy) NSArray * contentHead; 
@property (nonatomic,copy) NSArray * fetchMoreResultsCommands; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSURL * url; 
+(id)contentShelf;
+(id)contentShelfWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)url;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)encodedClassName;
-(NSArray *)contentHead;
-(void)setContentHead:(NSArray *)arg1 ;
-(NSArray *)fetchMoreResultsCommands;
-(void)setFetchMoreResultsCommands:(NSArray *)arg1 ;
@end

