/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSDate *)date;
-(NSArray *)fields;
-(NSString *)bundleID;
-(BOOL)isUsable;
-(NSString *)exception;
-(id)initWithLine:(id)arg1 ;
-(id)initWithLogLine:(id)arg1 ;
-(int)integerFromFieldAtIndex:(int)arg1 ;
-(id)nilableStringFromFieldAtIndex:(int)arg1 ;
-(long long)longLongFromFieldAtIndex:(int)arg1 ;
-(double)doubleFromFieldAtIndex:(int)arg1 ;
-(BOOL)boolFromFieldAtIndex:(int)arg1 ;
-(id)blankingStringFromFieldAtIndex:(int)arg1 ;
@end

