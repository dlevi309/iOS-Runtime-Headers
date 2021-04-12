/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSString, NSSet;

@interface HMDPersonModel : HMBModel

@property (retain) NSData * personLinksData; 
@property (retain) NSString * name; 
@property (copy) NSSet * personLinks; 
+(id)hmbProperties;
+(id)sentinelParentUUID;
-(NSSet *)personLinks;
-(void)setPersonLinks:(NSSet *)arg1 ;
-(id)initWithPerson:(id)arg1 ;
-(id)createPerson;
@end

