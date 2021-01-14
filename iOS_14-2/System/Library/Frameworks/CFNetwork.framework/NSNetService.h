/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)addresses;
-(long long)port;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)stopMonitoring;
-(id)init;
-(id<NSNetServiceDelegate>)delegate;
-(id)TXTRecordData;
-(BOOL)getInputStream:(out id*)arg1 outputStream:(out id*)arg2 ;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(int)arg4 ;
-(BOOL)setTXTRecordData:(id)arg1 ;
-(id)initWithCFNetService:(CFNetServiceRef)arg1 ;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 ;
-(void)startMonitoring;
-(void)publishWithOptions:(unsigned long long)arg1 ;
-(void)resolveWithTimeout:(double)arg1 ;
-(void)setIncludesPeerToPeer:(BOOL)arg1 ;
-(void)stop;
-(NSString *)domain;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(NSString *)name;
-(NSString *)hostName;
-(void)setDelegate:(id<NSNetServiceDelegate>)arg1 ;
-(id)description;
-(void)publish;
-(BOOL)includesPeerToPeer;
-(NSString *)type;
-(unsigned long long)hash;
-(void)resolve;
-(void)_setIncludesAWDL:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

