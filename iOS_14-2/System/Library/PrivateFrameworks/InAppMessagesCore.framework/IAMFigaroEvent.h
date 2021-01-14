/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
*/

#import <libobjc.A.dylib/IAMEventProtocol.h>

@class NSDictionary, NSString;

@interface IAMFigaroEvent : NSObject <IAMEventProtocol> {

	long long _type;
	NSDictionary* _payload;

}

@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSDictionary * payload;                  //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) id value; 
@property (nonatomic,copy,readonly) NSString * source; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPayload:(NSDictionary *)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSDictionary *)payload;
-(id)serializeFigaroEventProperties:(id)arg1 withPrefix:(id)arg2 ;
-(NSString *)name;
-(id)decomposeKey:(id)arg1 ;
-(long long)type;
-(id)initWithFigaroEventProperties:(id)arg1 ;
-(BOOL)matchesWithKey:(id)arg1 ;
@end

