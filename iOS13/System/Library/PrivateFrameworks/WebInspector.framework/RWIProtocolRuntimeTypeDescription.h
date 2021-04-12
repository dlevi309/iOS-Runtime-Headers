/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeTypeSet, NSArray;

@interface RWIProtocolRuntimeTypeDescription : RWIProtocolJSONObject

@property (assign,nonatomic) BOOL isValid; 
@property (nonatomic,copy) NSString * leastCommonAncestor; 
@property (nonatomic,retain) RWIProtocolRuntimeTypeSet * typeSet; 
@property (nonatomic,copy) NSArray * structures; 
@property (assign,nonatomic) BOOL isTruncated; 
-(BOOL)isValid;
-(BOOL)isTruncated;
-(void)setIsValid:(BOOL)arg1 ;
-(void)setIsTruncated:(BOOL)arg1 ;
-(RWIProtocolRuntimeTypeSet *)typeSet;
-(id)initWithIsValid:(BOOL)arg1 ;
-(void)setLeastCommonAncestor:(NSString *)arg1 ;
-(NSString *)leastCommonAncestor;
-(void)setTypeSet:(RWIProtocolRuntimeTypeSet *)arg1 ;
-(void)setStructures:(NSArray *)arg1 ;
-(NSArray *)structures;
@end

