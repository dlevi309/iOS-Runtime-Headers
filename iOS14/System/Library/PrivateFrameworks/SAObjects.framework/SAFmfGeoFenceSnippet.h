/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class SAFmfGeoFence, NSNumber, NSString, NSURL;

@interface SAFmfGeoFenceSnippet : SAUISnippet

@property (nonatomic,retain) SAFmfGeoFence * aceFmfGeoFence; 
@property (nonatomic,copy) NSNumber * enable; 
@property (nonatomic,copy) NSString * fenceType; 
@property (nonatomic,copy) NSNumber * oneTimeOnly; 
@property (nonatomic,copy) NSURL * searchContext; 
+(id)geoFenceSnippet;
+(id)geoFenceSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)enable;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setSearchContext:(NSURL *)arg1 ;
-(NSURL *)searchContext;
-(NSString *)fenceType;
-(void)setFenceType:(NSString *)arg1 ;
-(NSNumber *)oneTimeOnly;
-(void)setOneTimeOnly:(NSNumber *)arg1 ;
-(SAFmfGeoFence *)aceFmfGeoFence;
-(void)setAceFmfGeoFence:(SAFmfGeoFence *)arg1 ;
-(void)setEnable:(NSNumber *)arg1 ;
@end

