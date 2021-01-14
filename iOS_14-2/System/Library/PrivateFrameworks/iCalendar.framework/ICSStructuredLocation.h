/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSProperty.h>

@class NSString, NSData;

@interface ICSStructuredLocation : ICSProperty

@property (nonatomic,retain) NSString * fmtype; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * loctype; 
@property (nonatomic,retain) NSString * abURLString; 
@property (nonatomic,retain) NSData * mapKitHandle; 
@property (assign,nonatomic) double radius; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * address; 
@property (nonatomic,retain) NSString * routing; 
-(void)setRouting:(NSString *)arg1 ;
-(void)setRadius:(double)arg1 ;
-(NSData *)mapKitHandle;
-(NSString *)fmtype;
-(NSString *)abURLString;
-(void)setAbURLString:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(double)radius;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)loctype;
-(void)setFmtype:(NSString *)arg1 ;
-(NSString *)routing;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(NSString *)displayName;
-(NSString *)title;
-(id)propertiesToObscure;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)setLoctype:(NSString *)arg1 ;
@end

