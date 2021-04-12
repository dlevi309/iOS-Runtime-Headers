/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/VMUFieldInfo.h>

@class NSString, VMUClassInfo;

@interface VMUMutableFieldInfo : VMUFieldInfo

@property (assign,nonatomic) unsigned scannableSize; 
@property (assign,nonatomic) unsigned stride; 
@property (assign,nonatomic) unsigned flags; 
@property (assign,nonatomic) BOOL isCapture; 
@property (assign,nonatomic) BOOL isByref; 
@property (nonatomic,copy) NSString * ivarName; 
@property (assign,nonatomic) unsigned scanType; 
@property (nonatomic,retain) VMUClassInfo * destinationLayout; 
-(void)setOffset:(unsigned)arg1 ;
-(void)setSize:(unsigned)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)setStride:(unsigned)arg1 ;
-(void)setTypeName:(id)arg1 ;
-(void)setScanType:(unsigned)arg1 ;
-(void)setDestinationLayout:(VMUClassInfo *)arg1 ;
-(void)setIsCapture:(BOOL)arg1 ;
-(void)setIsByref:(BOOL)arg1 ;
-(BOOL)replaceFieldRecursively:(id)arg1 withField:(id)arg2 ;
-(void)mutateTypeFieldsRecursivelyWithBlock:(/*^block*/id)arg1 parentOffset:(unsigned)arg2 ;
-(void)setScannableSize:(unsigned)arg1 ;
-(void)setIvarName:(NSString *)arg1 ;
-(void)addSubField:(id)arg1 ;
@end

