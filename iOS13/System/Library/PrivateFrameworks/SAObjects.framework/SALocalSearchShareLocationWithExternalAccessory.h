/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setMapItem:(SALocalSearchMapItem *)arg1 ;
-(SALocalSearchMapItem *)mapItem;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)useNavigationDestination;
-(void)setUseNavigationDestination:(BOOL)arg1 ;
@end

