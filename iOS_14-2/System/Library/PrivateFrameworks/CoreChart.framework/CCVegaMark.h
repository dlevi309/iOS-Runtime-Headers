/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <libobjc.A.dylib/CCVegaMarkInterface.h>

@class NSString, CALayer, JSValue;

@interface CCVegaMark : NSObject <CCVegaMarkInterface> {

	JSValue* _items;
	JSValue* mark;

}

@property (retain) JSValue * mark; 
@property (nonatomic,readonly) unsigned long long itemCount; 
@property (nonatomic,readonly) BOOL clip; 
@property (nonatomic,readonly) BOOL interactive; 
@property (nonatomic,readonly) NSString * marktype; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * role; 
@property (nonatomic,readonly) double zindex; 
@property (nonatomic,retain) CALayer * caLayer; 
@property (assign,nonatomic) BOOL isDirty; 
-(BOOL)clip;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(BOOL)isDirty;
-(id)initWithJSValue:(id)arg1 ;
-(BOOL)interactive;
-(void)setMark:(JSValue *)arg1 ;
-(unsigned long long)itemCount;
-(JSValue *)mark;
-(NSString *)name;
-(double)zindex;
-(CALayer *)caLayer;
-(NSString *)role;
-(void)setIsDirty:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCaLayer:(CALayer *)arg1 ;
-(id)getString:(id)arg1 defaultValue:(id)arg2 ;
-(NSString *)marktype;
@end

