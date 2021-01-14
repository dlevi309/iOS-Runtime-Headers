/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SALocalSearchMapViewportVertex : AceObject <SAAceSerializable>

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mapViewportVertex;
+(id)mapViewportVertexWithDictionary:(id)arg1 context:(id)arg2 ;
-(double)latitude;
-(id)groupIdentifier;
-(id)encodedClassName;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
@end

