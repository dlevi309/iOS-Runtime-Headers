/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/VMUClassInfo.h>

@class VMUClassInfo, NSString;

@interface VMUMutableClassInfo : VMUClassInfo

@property (nonatomic,retain) VMUClassInfo * superclassInfo; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * binaryPath; 
@property (assign,nonatomic) unsigned defaultScanType; 
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setFields:(id)arg1 ;
-(void)addFields:(id)arg1 ;
-(void)addVariant:(id)arg1 forField:(id)arg2 withEvaluator:(/*^block*/id)arg3 ;
-(void)setDefaultScanType:(unsigned)arg1 ;
-(void)mutateTypeFieldsWithBlock:(/*^block*/id)arg1 ;
-(void)replaceField:(id)arg1 withFields:(id)arg2 ;
-(void)setVariantScanType:(unsigned)arg1 withEvaluator:(/*^block*/id)arg2 ;
-(void)addVariantRecursively:(id)arg1 forField:(id)arg2 withEvaluator:(/*^block*/id)arg3 ;
-(void)mutateTypeFieldsRecursivelyWithBlock:(/*^block*/id)arg1 ;
-(void)setSuperclassInfo:(VMUClassInfo *)arg1 ;
-(void)setBinaryPath:(NSString *)arg1 ;
@end

