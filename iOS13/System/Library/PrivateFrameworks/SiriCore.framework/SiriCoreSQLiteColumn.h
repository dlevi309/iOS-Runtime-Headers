/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSString *)type;
-(long long)identifier;
-(id<SiriCoreSQLiteValue>)defaultValue;
-(BOOL)isPrimaryKey;
-(BOOL)isNotNull;

@end

