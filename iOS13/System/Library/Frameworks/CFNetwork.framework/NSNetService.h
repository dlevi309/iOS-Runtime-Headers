/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSString, NSArray;

@interface NSNetService : NSObject {

	id _netService;
	id _delegate;
	id _reserved;

}

@property (assign) id<NSNetServiceDelegate> delegate; 
@property (assign) BOOL includesPeerToPeer; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * type; 
@property (copy,readonly) NSString * domain; 
@property (copy,readonly) NSString * hostName; 
@property (copy,readonly) NSArray * addresses; 
@property (readonly) long long port; 
+(id)dictionaryFromTXTRecordData:(id)arg1 ;
+(id)dataFromTXTRecordDictionary:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)domain;
-(NSString *)type;
-(id<NSNetServiceDelegate>)delegate;
-(void)setDelegate:(id<NSNetServiceDelegate>)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(long long)port;
-(void)stop;
-(NSString *)hostName;
-(void)publish;
-(void)resolve;
-(id)_monitors;
-(NSArray *)addresses;
-(id)initWithCFNetService:(CFNetServiceRef)arg1 ;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(int)arg4 ;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 ;
-(BOOL)includesPeerToPeer;
-(void)setIncludesPeerToPeer:(BOOL)arg1 ;
-(BOOL)_includesAWDL;
-(void)_setIncludesAWDL:(BOOL)arg1 ;
-(void)_scheduleInDefaultRunLoopForMode:(id)arg1 ;
-(void)_internal_publishWithOptions:(unsigned long long)arg1 ;
-(id)normalizedType;
-(void)publishWithServer:(unsigned long long)arg1 ;
-(void)publishWithOptions:(unsigned long long)arg1 ;
-(void)_dispatchCallBackWithError:(SCD_Struct_NS26)arg1 ;
-(CFNetServiceRef)_internalNetService;
-(BOOL)getInputStream:(out id*)arg1 outputStream:(out id*)arg2 ;
-(void)resolveWithTimeout:(double)arg1 ;
-(void)startMonitoring;
-(void)stopMonitoring;
-(BOOL)setTXTRecordData:(id)arg1 ;
-(id)TXTRecordData;
@end

