/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
*/


@class NSString;

@interface MIDINetworkHost : NSObject {

	void* _imp;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * address; 
@property (nonatomic,readonly) unsigned long long port; 
@property (nonatomic,readonly) NSString * netServiceName; 
@property (nonatomic,readonly) NSString * netServiceDomain; 
+(id)hostWithName:(id)arg1 address:(id)arg2 port:(unsigned long long)arg3 ;
+(id)hostWithName:(id)arg1 netServiceName:(id)arg2 netServiceDomain:(id)arg3 ;
+(id)hostWithName:(id)arg1 netService:(id)arg2 ;
+(id)fromAddressAsText:(id)arg1 withName:(id)arg2 ;
-(unsigned long long)port;
-(id)host;
-(id)init;
-(NSString *)name;
-(id)description;
-(NSString *)address;
-(void)setName:(NSString *)arg1 ;
-(id)displayName;
-(void)dealloc;
-(id)addressAsText;
-(BOOL)hasSameAddressAs:(id)arg1 ;
-(NSString *)netServiceName;
-(NSString *)netServiceDomain;
@end

