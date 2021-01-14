/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, SAUIAppPunchOut, SAUIImageResource;

@interface SAWeatherAirQualitySnippet : SAUISnippet

@property (nonatomic,copy) NSArray * aceAirQualities; 
@property (nonatomic,retain) SAUIAppPunchOut * appPunchOut; 
@property (nonatomic,retain) SAUIImageResource * attributionImage; 
+(id)airQualitySnippet;
+(id)airQualitySnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setAttributionImage:(SAUIImageResource *)arg1 ;
-(SAUIAppPunchOut *)appPunchOut;
-(void)setAppPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAUIImageResource *)attributionImage;
-(NSArray *)aceAirQualities;
-(void)setAceAirQualities:(NSArray *)arg1 ;
@end

