/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)address;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)displayName;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(void)setRouting:(NSString *)arg1 ;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(NSData *)mapKitHandle;
-(NSString *)routing;
-(NSString *)abURLString;
-(void)setAbURLString:(NSString *)arg1 ;
-(NSString *)fmtype;
-(void)setFmtype:(NSString *)arg1 ;
-(id)propertiesToObscure;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(NSString *)loctype;
-(void)setLoctype:(NSString *)arg1 ;
@end

