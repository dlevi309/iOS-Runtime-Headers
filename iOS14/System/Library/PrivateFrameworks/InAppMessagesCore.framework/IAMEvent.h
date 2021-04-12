/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
*/

#import <libobjc.A.dylib/IAMEventProtocol.h>

@class NSString, NSDictionary;

@interface IAMEvent : NSObject <IAMEventProtocol> {

	NSString* _name;
	long long _type;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) id value; 
@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,copy,readonly) NSDictionary * payload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithName:(id)arg1 type:(long long)arg2 ;
-(void)setType:(long long)arg1 ;
-(NSString *)name;
-(long long)type;
-(void)setName:(NSString *)arg1 ;
-(BOOL)matchesWithKey:(id)arg1 ;
@end

