/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SALocation.h>

@class NSNumber, SAPersonAttribute;

@interface SAFmfLocation : SALocation

@property (nonatomic,copy) NSNumber * distance; 
@property (nonatomic,retain) SAPersonAttribute * friend; 
@property (nonatomic,copy) NSNumber * locationDate; 
+(id)location;
+(id)locationWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setDistance:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)distance;
-(SAPersonAttribute *)friend;
-(void)setFriend:(SAPersonAttribute *)arg1 ;
-(NSNumber *)locationDate;
-(void)setLocationDate:(NSNumber *)arg1 ;
@end

