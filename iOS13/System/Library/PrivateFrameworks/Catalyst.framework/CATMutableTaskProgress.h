/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATTaskProgress.h>

@class NSError, NSDictionary;

@interface CATMutableTaskProgress : CATTaskProgress

@property (assign,nonatomic) unsigned long long phase; 
@property (nonatomic,retain) id resultObject; 
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (assign,nonatomic) BOOL isCancelable; 
@property (assign,nonatomic) BOOL isCanceled; 
@property (assign,nonatomic) long long completedUnitCount; 
@property (assign,nonatomic) long long totalUnitCount; 
-(id)initWithCoder:(id)arg1 ;
-(void)setProgress:(id)arg1 ;
-(void)setResultObject:(id)arg1 ;
-(id)initWithOperationUUID:(id)arg1 ;
-(id)initWithOperationUUID:(id)arg1 requestClass:(Class)arg2 ;
@end

