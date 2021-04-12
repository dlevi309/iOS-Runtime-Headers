/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <libobjc.A.dylib/IAMEventProtocol.h>

@class NSString, NSDictionary;

@interface IAMEvent : NSObject <IAMEventProtocol> {

	NSString* _name;
	long long _type;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long type;                             //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) id value; 
@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,copy,readonly) NSDictionary * payload; 
-(NSString *)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 type:(long long)arg2 ;
-(BOOL)matchesWithKey:(id)arg1 ;
@end

