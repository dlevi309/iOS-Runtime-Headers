/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)parameters;
-(SiriCoreSQLiteStatement *)statement;
-(id)initWithString:(id)arg1 statement:(id)arg2 parameters:(id)arg3 recordBuilder:(id)arg4 options:(unsigned long long)arg5 ;
-(unsigned long long)options;
-(id)description;
-(id<SiriCoreSQLiteRecordBuilder>)recordBuilder;
-(NSString *)string;
@end

