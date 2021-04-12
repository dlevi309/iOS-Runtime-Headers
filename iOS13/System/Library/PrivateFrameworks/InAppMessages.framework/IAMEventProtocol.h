/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

@class NSString, NSDictionary;


@protocol IAMEventProtocol <NSObject>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) id value; 
@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,copy,readonly) NSDictionary * payload; 
@optional
-(NSString *)source;
-(id)value;
-(NSDictionary *)payload;

@required
-(NSString *)name;
-(long long)type;
-(BOOL)matchesWithKey:(id)arg1;

@end

