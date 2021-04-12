/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
*/

@class NSString, NSDictionary;


@protocol IAMEventProtocol <NSObject>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) id value; 
@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,copy,readonly) NSDictionary * payload; 
@optional
-(NSDictionary *)payload;
-(id)value;
-(NSString *)source;

@required
-(NSString *)name;
-(long long)type;
-(BOOL)matchesWithKey:(id)arg1;

@end

