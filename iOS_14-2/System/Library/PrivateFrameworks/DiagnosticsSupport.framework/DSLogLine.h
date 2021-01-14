/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/


@class NSString, NSDate, NSArray;

@interface DSLogLine : NSObject {

	BOOL _isUsable;
	NSString* _type;
	NSDate* _date;
	NSString* _exception;
	NSArray* _fields;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * date;                     //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL isUsable;                     //@synthesize isUsable=_isUsable - In the implementation block
@property (nonatomic,readonly) NSString * exception;              //@synthesize exception=_exception - In the implementation block
@property (nonatomic,readonly) NSArray * fields;                  //@synthesize fields=_fields - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
+(id)logLinesFromArray:(id)arg1 ;
-(NSArray *)fields;
-(BOOL)isUsable;
-(void)setType:(NSString *)arg1 ;
-(NSString *)exception;
-(NSString *)bundleID;
-(NSString *)type;
-(NSDate *)date;
-(id)initWithLine:(id)arg1 ;
-(id)initWithLogLine:(id)arg1 ;
-(int)integerFromFieldAtIndex:(int)arg1 ;
-(id)nilableStringFromFieldAtIndex:(int)arg1 ;
-(long long)longLongFromFieldAtIndex:(int)arg1 ;
-(double)doubleFromFieldAtIndex:(int)arg1 ;
-(BOOL)boolFromFieldAtIndex:(int)arg1 ;
-(id)blankingStringFromFieldAtIndex:(int)arg1 ;
@end

