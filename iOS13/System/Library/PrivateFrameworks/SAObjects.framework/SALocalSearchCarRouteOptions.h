/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SALocalSearchCarRouteOptions : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL avoidHighways; 
@property (assign,nonatomic) BOOL avoidTolls; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)carRouteOptions;
+(id)carRouteOptionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)avoidTolls;
-(void)setAvoidTolls:(BOOL)arg1 ;
-(BOOL)avoidHighways;
-(void)setAvoidHighways:(BOOL)arg1 ;
-(id)encodedClassName;
@end

