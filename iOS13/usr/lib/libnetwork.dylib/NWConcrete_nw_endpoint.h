/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_endpoint.h>

@protocol OS_nw_context, OS_nw_interface;
@class NSObject, NSString;

@interface NWConcrete_nw_endpoint : NSObject <OS_nw_endpoint> {

	NSObject*<OS_nw_context> context;
	NSObject*<OS_nw_interface> interface;
	char* description;
	char* logging_description;
	NWConcrete_nw_endpoint* parent_endpoint;
	int original_fd;
	unsigned short alternate_port;
	os_unfair_lock_s lock;
	nw_hash_tableRef associations;
	unsigned is_local_domain : 1;
	unsigned parent_is_proxy : 1;
	unsigned description_used : 1;
	unsigned logging_description_used : 1;

}

@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,readonly) const char* domainForPolicy; 
@property (nonatomic,readonly) const char* hostname; 
@property (nonatomic,readonly) unsigned short port; 
@property (assign,nonatomic) unsigned short priority; 
@property (assign,nonatomic) unsigned short weight; 
@property (nonatomic,readonly) const char* getDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(unsigned)type;
-(id)copyDictionary;
-(id)redactedDescription;
-(unsigned short)port;
-(unsigned short)priority;
-(void)setPriority:(unsigned short)arg1 ;
-(void)setWeight:(unsigned short)arg1 ;
-(unsigned short)weight;
-(const char*)hostname;
-(char*)createDescription:(BOOL)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(const char*)domainForPolicy;
-(const char*)getDescription;
-(const char*)getLoggingDescription;
@end

