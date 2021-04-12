/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <LocationSupport/CLIntersiloService.h>
#import <libobjc.A.dylib/CLIntersiloServiceMockProtocol.h>

@class NSMutableDictionary, NSString;

@interface CLIntersiloServiceMock : CLIntersiloService <CLIntersiloServiceMockProtocol> {

	NSMutableDictionary* _keyedPayloads;

}

@property (nonatomic,retain) NSMutableDictionary * keyedPayloads;              //@synthesize keyedPayloads=_keyedPayloads - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
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

