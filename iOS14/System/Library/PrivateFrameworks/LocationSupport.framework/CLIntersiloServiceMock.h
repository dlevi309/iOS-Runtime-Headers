/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <LocationSupport/CLIntersiloService.h>
#import <libobjc.A.dylib/CLIntersiloServiceMockProtocol.h>

@class NSMutableDictionary, NSString;

@interface CLIntersiloServiceMock : CLIntersiloService <CLIntersiloServiceMockProtocol> {

	NSMutableDictionary* _keyedPayloads;

}

@property (nonatomic,retain) NSMutableDictionary * keyedPayloads;              //@synthesize keyedPayloads=_keyedPayloads - In the implementation block
@property (assign,nonatomic) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginService;
-(void)endService;
-(void)setKeyedPayloads:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)keyedPayloads;
-(id)getPayloadForKey:(id)arg1 ;
-(void)setPayload:(id)arg1 forKey:(id)arg2 ;
-(void)removePayloadForKey:(id)arg1 ;
-(void)setPayload:(id)arg1 forSelector:(SEL)arg2 ;
-(void)removePayloadForSelector:(SEL)arg1 ;
-(id)syncgetPayloadForSelector:(SEL)arg1 ;
-(id)syncgetPayloadForKey:(id)arg1 ;
-(id)getPayloadForSelector:(SEL)arg1 ;
@end

