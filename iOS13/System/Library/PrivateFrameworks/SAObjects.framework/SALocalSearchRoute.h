/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSData, NSString;

@interface SALocalSearchRoute : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSData * routeAsZilchBinary; 
@property (nonatomic,copy) NSData * routeId; 
@property (nonatomic,copy) NSData * sessionState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)route;
+(id)routeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSData *)sessionState;
-(void)setSessionState:(NSData *)arg1 ;
-(NSData *)routeId;
-(void)setRouteId:(NSData *)arg1 ;
-(id)encodedClassName;
-(NSData *)routeAsZilchBinary;
-(void)setRouteAsZilchBinary:(NSData *)arg1 ;
@end

