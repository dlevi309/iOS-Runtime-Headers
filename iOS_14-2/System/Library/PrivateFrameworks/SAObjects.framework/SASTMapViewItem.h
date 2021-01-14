/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class NSString, NSDate, SALocation, NSNumber;

@interface SASTMapViewItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (nonatomic,copy) NSString * extSessionGuid; 
@property (nonatomic,copy) NSDate * extSessionGuidCreatedTimestamp; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSNumber * zoomLevel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mapViewItem;
+(id)mapViewItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)zoomLevel;
-(id)groupIdentifier;
-(void)setZoomLevel:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(SALocation *)location;
-(id<SASTTemplateAction>)action;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(void)setLocation:(SALocation *)arg1 ;
-(NSString *)extSessionGuid;
-(void)setExtSessionGuid:(NSString *)arg1 ;
-(NSDate *)extSessionGuidCreatedTimestamp;
-(void)setExtSessionGuidCreatedTimestamp:(NSDate *)arg1 ;
@end

