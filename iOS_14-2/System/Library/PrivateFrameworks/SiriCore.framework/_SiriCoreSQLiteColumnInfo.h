/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) long long identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isPrimaryKey;                                      //@synthesize isPrimaryKey=_isPrimaryKey - In the implementation block
@property (nonatomic,readonly) BOOL isNotNull;                                         //@synthesize isNotNull=_isNotNull - In the implementation block
@property (nonatomic,copy,readonly) id<SiriCoreSQLiteValue> defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isNotNull;
-(id)initWithIdentifier:(long long)arg1 name:(id)arg2 type:(id)arg3 isPrimaryKey:(BOOL)arg4 isNotNull:(BOOL)arg5 defaultValue:(id)arg6 ;
-(id<SiriCoreSQLiteValue>)defaultValue;
-(NSString *)name;
-(BOOL)isPrimaryKey;
-(NSString *)type;
-(long long)identifier;
@end

