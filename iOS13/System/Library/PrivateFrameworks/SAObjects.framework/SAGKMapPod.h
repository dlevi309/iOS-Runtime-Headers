/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAUIAppPunchOut *)punchOut;
-(NSNumber *)zoomLevel;
-(void)setZoomLevel:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)showButton;
-(void)setShowButton:(NSNumber *)arg1 ;
@end

