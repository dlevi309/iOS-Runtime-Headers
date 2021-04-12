/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSData;

@interface _CDContextualKeyPathMO : NSManagedObject

@property (nonatomic,retain) NSString * key; 
@property (nonatomic,retain) NSString * deviceIDString; 
@property (assign,nonatomic) BOOL isUserCentric; 
@property (assign,nonatomic) BOOL isEphemeral; 
@property (nonatomic,retain) NSDate * lastModifiedDate; 
@property (nonatomic,retain) NSData * value; 
@property (nonatomic,retain) NSDate * creationDate; 
+(void)hydrateMO:(id)arg1 fromKeyPath:(id)arg2 andValue:(id)arg3 ;
+(id)materializedKeyPathFrom:(id)arg1 ;
+(id)materializedContextValueFrom:(id)arg1 ;
@end

