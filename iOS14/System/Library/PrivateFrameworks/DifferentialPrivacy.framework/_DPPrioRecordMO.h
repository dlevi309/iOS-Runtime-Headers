/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <CoreData/NSManagedObject.h>

@class NSData, NSString;

@interface _DPPrioRecordMO : NSManagedObject

@property (nonatomic,retain) NSData * share1; 
@property (nonatomic,retain) NSData * share2; 
@property (nonatomic,retain) NSData * metadata; 
@property (assign,nonatomic) double creationDate; 
@property (nonatomic,retain) NSString * key; 
@property (assign,nonatomic) BOOL submitted; 
@property (assign,nonatomic) long long reportVersion; 
+(id)fetchRequest;
@end

