/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAGKPodView.h>

@class SALocation, SAUIAppPunchOut, NSNumber;

@interface SAGKMapPod : SAGKPodView

@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSNumber * showButton; 
@property (nonatomic,copy) NSNumber * zoomLevel; 
+(id)mapPod;
+(id)mapPodWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)zoomLevel;
-(id)groupIdentifier;
-(void)setZoomLevel:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(SALocation *)location;
-(SAUIAppPunchOut *)punchOut;
-(NSNumber *)showButton;
-(void)setShowButton:(NSNumber *)arg1 ;
-(void)setLocation:(SALocation *)arg1 ;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
@end

