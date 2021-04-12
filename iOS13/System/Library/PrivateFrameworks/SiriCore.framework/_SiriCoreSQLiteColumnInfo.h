/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

#import <SiriCore/SiriCoreSQLiteColumn.h>

@protocol SiriCoreSQLiteValue;
@class NSString;

@interface _SiriCoreSQLiteColumnInfo : NSObject <SiriCoreSQLiteColumn> {

	BOOL _isPrimaryKey;
	BOOL _isNotNull;
	long long _identifier;
	NSString* _name;
	NSString* _type;
	id<SiriCoreSQLiteValue> _defaultValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isPrimaryKey;                                      //@synthesize isPrimaryKey=_isPrimaryKey - In the implementation block
@property (nonatomic,readonly) BOOL isNotNull;                                         //@synthesize isNotNull=_isNotNull - In the implementation block
@property (nonatomic,copy,readonly) id<SiriCoreSQLiteValue> defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
-(NSString *)name;
-(NSString *)type;
-(long long)identifier;
-(id<SiriCoreSQLiteValue>)defaultValue;
-(BOOL)isPrimaryKey;
-(BOOL)isNotNull;
-(id)initWithIdentifier:(long long)arg1 name:(id)arg2 type:(id)arg3 isPrimaryKey:(BOOL)arg4 isNotNull:(BOOL)arg5 defaultValue:(id)arg6 ;
@end

