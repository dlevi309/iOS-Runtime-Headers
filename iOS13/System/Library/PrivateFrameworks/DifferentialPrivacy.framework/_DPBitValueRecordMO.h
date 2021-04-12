/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

