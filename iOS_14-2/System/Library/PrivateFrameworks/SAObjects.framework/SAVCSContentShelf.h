/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSArray *)contentHead;
-(void)setContentHead:(NSArray *)arg1 ;
-(NSArray *)fetchMoreResultsCommands;
-(void)setFetchMoreResultsCommands:(NSArray *)arg1 ;
-(NSString *)title;
@end

