/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface _DPBitValueRecordMO : NSManagedObject

@property (assign,nonatomic) short clearBitValue; 
@property (assign,nonatomic) double creationDate; 
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * privateBitValueStr; 
@property (assign,nonatomic) long long reportVersion; 
@property (assign,nonatomic) BOOL submitted; 
+(id)fetchRequest;
@end

