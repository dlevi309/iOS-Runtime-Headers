/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>

@class NSString, STCoreOrganization, NSArray, NSData;

@interface STCoreTransportPayload : NSManagedObject

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,retain) STCoreOrganization * sourceOrganizationEnqueued; 
@property (nonatomic,retain) STCoreOrganization * sourceOrganizationPending; 
@property (nonatomic,retain) STCoreOrganization * sourceOrganizationRecent; 
@property (nonatomic,copy) NSArray * destinations; 
@property (nonatomic,copy) NSData * payloadData; 
+(id)fetchRequestForPayloadsOfType:(id)arg1 ;
+(id)fetchLastTransportPayloadInContext:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
+(id)fetchTransportPayloadContext:(id)arg1 withIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)setDestinations:(NSArray *)arg1 ;
-(NSArray *)destinations;
-(id)description;
@end

