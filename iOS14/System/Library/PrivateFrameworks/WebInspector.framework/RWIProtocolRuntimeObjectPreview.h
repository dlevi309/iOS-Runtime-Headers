/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)subtype;
-(NSArray *)properties;
-(NSString *)stringRepresentation;
-(void)setEntries:(NSArray *)arg1 ;
-(int)size;
-(void)setSize:(int)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSArray *)entries;
-(long long)type;
-(void)setProperties:(NSArray *)arg1 ;
-(void)setSubtype:(long long)arg1 ;
-(BOOL)overflow;
-(void)setStringRepresentation:(NSString *)arg1 ;
-(void)setOverflow:(BOOL)arg1 ;
-(void)setLossless:(BOOL)arg1 ;
-(BOOL)lossless;
-(id)initWithType:(long long)arg1 lossless:(BOOL)arg2 ;
@end

