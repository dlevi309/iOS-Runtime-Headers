/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, BSSMO;

@interface GeoTagMO : NSManagedObject

@property (nonatomic,copy) NSDate * date; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) int taggedCount; 
@property (nonatomic,retain) BSSMO * bss; 
+(id)entityName;
+(id)fetchRequest;
@end

