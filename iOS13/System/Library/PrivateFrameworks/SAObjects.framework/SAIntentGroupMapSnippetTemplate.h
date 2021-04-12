/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class SAUIColor, SAIntentGroupDetailLabelTemplateComponent, SALocation, NSString;

@interface SAIntentGroupMapSnippetTemplate : SAIntentGroupSnippetTemplate

@property (nonatomic,retain) SAUIColor * color; 
@property (nonatomic,retain) SAIntentGroupDetailLabelTemplateComponent * detailLabelComponent; 
@property (assign,nonatomic) BOOL interactive; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * mapSize; 
@property (nonatomic,retain) id<SAIntentGroupSetMapLocation> updateLocationCommand; 
+(id)mapSnippetTemplate;
+(id)mapSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SALocation *)location;
-(SAUIColor *)color;
-(void)setColor:(SAUIColor *)arg1 ;
-(void)setLocation:(SALocation *)arg1 ;
-(BOOL)interactive;
-(void)setInteractive:(BOOL)arg1 ;
-(id)encodedClassName;
-(NSString *)mapSize;
-(SAIntentGroupDetailLabelTemplateComponent *)detailLabelComponent;
-(void)setDetailLabelComponent:(SAIntentGroupDetailLabelTemplateComponent *)arg1 ;
-(void)setMapSize:(NSString *)arg1 ;
-(id<SAIntentGroupSetMapLocation>)updateLocationCommand;
-(void)setUpdateLocationCommand:(id<SAIntentGroupSetMapLocation>)arg1 ;
@end

