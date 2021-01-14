/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithOperationUUID:(id)arg1 ;
-(void)setProgress:(id)arg1 ;
-(void)setResultObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithOperationUUID:(id)arg1 requestClass:(Class)arg2 ;
@end

