/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, SAUIAppPunchOut, SAUIImageResource;

@interface SAWeatherForecastSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * aceWeathers; 
@property (nonatomic,retain) SAUIAppPunchOut * appPunchOut; 
@property (nonatomic,retain) SAUIImageResource * attributionImage; 
+(id)forecastSnippet;
+(id)forecastSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAUIImageResource *)attributionImage;
-(void)setAttributionImage:(SAUIImageResource *)arg1 ;
-(id)encodedClassName;
-(SAUIAppPunchOut *)appPunchOut;
-(void)setAppPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSArray *)aceWeathers;
-(void)setAceWeathers:(NSArray *)arg1 ;
@end

