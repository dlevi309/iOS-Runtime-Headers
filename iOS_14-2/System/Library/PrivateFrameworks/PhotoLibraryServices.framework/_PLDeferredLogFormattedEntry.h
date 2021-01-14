/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString, NSDate;

@interface _PLDeferredLogFormattedEntry : NSObject {

	long long _context;
	NSString* _logType;
	NSString* _entityDescription;
	NSDate* _date;
	unsigned long long _objectPointer;

}

@property (assign,nonatomic) long long context;                             //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * logType;                            //@synthesize logType=_logType - In the implementation block
@property (nonatomic,retain) NSString * entityDescription;                  //@synthesize entityDescription=_entityDescription - In the implementation block
@property (nonatomic,retain) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long objectPointer;              //@synthesize objectPointer=_objectPointer - In the implementation block
-(NSString *)logType;
-(void)setDate:(NSDate *)arg1 ;
-(long long)context;
-(NSString *)entityDescription;
-(void)setEntityDescription:(NSString *)arg1 ;
-(unsigned long long)objectPointer;
-(void)setObjectPointer:(unsigned long long)arg1 ;
-(void)setLogType:(NSString *)arg1 ;
-(NSDate *)date;
-(void)setContext:(long long)arg1 ;
@end

