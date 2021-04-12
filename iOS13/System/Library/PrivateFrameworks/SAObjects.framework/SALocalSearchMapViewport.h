/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SALocalSearchMapViewport : SADomainObject

@property (assign,nonatomic) double eastLongitude; 
@property (assign,nonatomic) double northLatitude; 
@property (assign,nonatomic) double southLatitude; 
@property (assign,nonatomic) double timeInSecondsSinceViewportChanged; 
@property (assign,nonatomic) double timeInSecondsSinceViewportEnteredForeground; 
@property (nonatomic,copy) NSArray * vertices; 
@property (assign,nonatomic) double westLongitude; 
+(id)mapViewport;
+(id)mapViewportWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)vertices;
-(id)encodedClassName;
-(void)setVertices:(NSArray *)arg1 ;
-(double)eastLongitude;
-(void)setEastLongitude:(double)arg1 ;
-(double)northLatitude;
-(void)setNorthLatitude:(double)arg1 ;
-(double)southLatitude;
-(void)setSouthLatitude:(double)arg1 ;
-(double)timeInSecondsSinceViewportChanged;
-(void)setTimeInSecondsSinceViewportChanged:(double)arg1 ;
-(double)timeInSecondsSinceViewportEnteredForeground;
-(void)setTimeInSecondsSinceViewportEnteredForeground:(double)arg1 ;
-(double)westLongitude;
-(void)setWestLongitude:(double)arg1 ;
@end

