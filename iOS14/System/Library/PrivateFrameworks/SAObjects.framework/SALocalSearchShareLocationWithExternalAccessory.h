/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class SALocalSearchMapItem;

@interface SALocalSearchShareLocationWithExternalAccessory : SADomainCommand

@property (nonatomic,retain) SALocalSearchMapItem * mapItem; 
@property (assign,nonatomic) BOOL useNavigationDestination; 
+(id)shareLocationWithExternalAccessory;
+(id)shareLocationWithExternalAccessoryWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SALocalSearchMapItem *)mapItem;
-(BOOL)useNavigationDestination;
-(void)setMapItem:(SALocalSearchMapItem *)arg1 ;
-(void)setUseNavigationDestination:(BOOL)arg1 ;
@end

