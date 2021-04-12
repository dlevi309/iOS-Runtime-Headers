/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)mapSize;
-(id)encodedClassName;
-(SAUIColor *)color;
-(SALocation *)location;
-(BOOL)interactive;
-(void)setLocation:(SALocation *)arg1 ;
-(void)setInteractive:(BOOL)arg1 ;
-(void)setColor:(SAUIColor *)arg1 ;
-(SAIntentGroupDetailLabelTemplateComponent *)detailLabelComponent;
-(void)setDetailLabelComponent:(SAIntentGroupDetailLabelTemplateComponent *)arg1 ;
-(void)setMapSize:(NSString *)arg1 ;
-(id<SAIntentGroupSetMapLocation>)updateLocationCommand;
-(void)setUpdateLocationCommand:(id<SAIntentGroupSetMapLocation>)arg1 ;
@end

