/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

@class NSString;


@protocol SiriCoreSQLiteColumn <NSObject>
@property (nonatomic,readonly) long long identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,readonly) BOOL isPrimaryKey; 
@property (nonatomic,readonly) BOOL isNotNull; 
@property (nonatomic,copy,readonly) id<SiriCoreSQLiteValue> defaultValue; 
@required
-(BOOL)isNotNull;
-(id<SiriCoreSQLiteValue>)defaultValue;
-(NSString *)name;
-(BOOL)isPrimaryKey;
-(NSString *)type;
-(long long)identifier;

@end

