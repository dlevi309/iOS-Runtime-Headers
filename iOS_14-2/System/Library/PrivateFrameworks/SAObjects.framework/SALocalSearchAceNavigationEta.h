/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SADistance, SADuration, NSString;

@interface SALocalSearchAceNavigationEta : AceObject <SAAceSerializable>

@property (nonatomic,retain) SADistance * distanceEta; 
@property (nonatomic,retain) SADuration * timeEta; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceNavigationEta;
+(id)aceNavigationEtaWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setTimeEta:(SADuration *)arg1 ;
-(SADuration *)timeEta;
-(SADistance *)distanceEta;
-(void)setDistanceEta:(SADistance *)arg1 ;
@end

