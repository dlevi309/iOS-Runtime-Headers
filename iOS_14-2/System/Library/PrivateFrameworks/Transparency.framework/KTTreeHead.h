/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSSet;

@interface KTTreeHead : NSManagedObject

@property (nonatomic,copy) NSString * application; 
@property (assign,nonatomic) long long consistencyVerified; 
@property (assign,nonatomic) long long inclusionVerified; 
@property (assign,nonatomic) BOOL isMapHead; 
@property (assign,nonatomic) long long logBeginTime; 
@property (nonatomic,retain) NSData * logHeadHash; 
@property (assign,nonatomic) long long logType; 
@property (assign,nonatomic) double receiptTime; 
@property (assign,nonatomic) long long revision; 
@property (assign,nonatomic) long long signatureVerified; 
@property (nonatomic,retain) NSData * sth; 
@property (nonatomic,retain) NSSet * failures; 
+(id)fetchRequest;
@end

