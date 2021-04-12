/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <libobjc.A.dylib/IAMEventProtocol.h>

@class NSDictionary, NSString;

@interface IAMFigaroEvent : NSObject <IAMEventProtocol> {

	long long _type;
	NSDictionary* _payload;

}

@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSDictionary * payload;                  //@synthesize payload=_payload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) id value; 
@property (nonatomic,copy,readonly) NSString * source; 
-(NSString *)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)payload;
-(BOOL)matchesWithKey:(id)arg1 ;
-(id)serializeFigaroEventProperties:(id)arg1 withPrefix:(id)arg2 ;
-(id)decomposeKey:(id)arg1 ;
-(id)initWithFigaroEventProperties:(id)arg1 ;
@end

