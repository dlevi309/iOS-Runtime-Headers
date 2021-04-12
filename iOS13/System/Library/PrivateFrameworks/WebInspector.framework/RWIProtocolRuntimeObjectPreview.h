/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolRuntimeObjectPreview : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) BOOL lossless; 
@property (assign,nonatomic) long long subtype; 
@property (nonatomic,copy) NSString * stringRepresentation; 
@property (assign,nonatomic) BOOL overflow; 
@property (nonatomic,copy) NSArray * properties; 
@property (nonatomic,copy) NSArray * entries; 
@property (assign,nonatomic) int size; 
-(long long)type;
-(void)setType:(long long)arg1 ;
-(int)size;
-(NSString *)stringRepresentation;
-(NSArray *)properties;
-(void)setSize:(int)arg1 ;
-(long long)subtype;
-(void)setProperties:(NSArray *)arg1 ;
-(void)setEntries:(NSArray *)arg1 ;
-(NSArray *)entries;
-(void)setStringRepresentation:(NSString *)arg1 ;
-(void)setSubtype:(long long)arg1 ;
-(BOOL)overflow;
-(void)setOverflow:(BOOL)arg1 ;
-(void)setLossless:(BOOL)arg1 ;
-(BOOL)lossless;
-(id)initWithType:(long long)arg1 lossless:(BOOL)arg2 ;
@end

