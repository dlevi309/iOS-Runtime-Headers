/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@protocol SiriCoreSQLiteRecordBuilder;
@class NSString, SiriCoreSQLiteStatement, NSArray;

@interface SiriCoreSQLiteQuery : NSObject {

	NSString* _string;
	SiriCoreSQLiteStatement* _statement;
	NSArray* _parameters;
	id<SiriCoreSQLiteRecordBuilder> _recordBuilder;
	unsigned long long _options;

}

@property (nonatomic,copy,readonly) NSString * string;                                     //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) SiriCoreSQLiteStatement * statement;                        //@synthesize statement=_statement - In the implementation block
@property (nonatomic,copy,readonly) NSArray * parameters;                                  //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) id<SiriCoreSQLiteRecordBuilder> recordBuilder;              //@synthesize recordBuilder=_recordBuilder - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                 //@synthesize options=_options - In the implementation block
-(NSString *)string;
-(id)description;
-(unsigned long long)options;
-(NSArray *)parameters;
-(SiriCoreSQLiteStatement *)statement;
-(id<SiriCoreSQLiteRecordBuilder>)recordBuilder;
-(id)initWithString:(id)arg1 statement:(id)arg2 parameters:(id)arg3 recordBuilder:(id)arg4 options:(unsigned long long)arg5 ;
@end

