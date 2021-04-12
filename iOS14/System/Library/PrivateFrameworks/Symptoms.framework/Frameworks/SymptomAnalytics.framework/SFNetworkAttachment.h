/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, NSString, NSData, NSSet;

@interface SFNetworkAttachment : NSManagedObject

@property (nonatomic,copy) NSNumber * attrs; 
@property (nonatomic,copy) NSDate * firstTimeStamp; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) BOOL isHotSpot; 
@property (assign,nonatomic) BOOL isKnownGood; 
@property (assign,nonatomic) BOOL isLowInternetDL; 
@property (assign,nonatomic) BOOL isLowInternetUL; 
@property (nonatomic,copy) NSNumber * kind; 
@property (nonatomic,retain) NSData * netSignature; 
@property (nonatomic,copy) NSNumber * overallStayMean; 
@property (nonatomic,copy) NSNumber * overallStayVar; 
@property (nonatomic,copy) NSString * service; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,copy) NSNumber * velo; 
@property (assign,nonatomic) BOOL wasLastFailed; 
@property (nonatomic,retain) NSSet * hasDefaultRoute; 
@property (nonatomic,retain) NSSet * supportsFlows; 
+(id)entityName;
+(id)fetchRequest;
@end

