/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)hostWithName:(id)arg1 netServiceName:(id)arg2 netServiceDomain:(id)arg3 ;
+(id)hostWithName:(id)arg1 address:(id)arg2 port:(unsigned long long)arg3 ;
+(id)hostWithName:(id)arg1 netService:(id)arg2 ;
+(id)fromAddressAsText:(id)arg1 withName:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)host;
-(unsigned long long)port;
-(void)setName:(NSString *)arg1 ;
-(NSString *)address;
-(id)displayName;
-(NSString *)netServiceName;
-(NSString *)netServiceDomain;
-(BOOL)hasSameAddressAs:(id)arg1 ;
-(id)addressAsText;
@end

