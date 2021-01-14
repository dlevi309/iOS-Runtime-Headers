/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_endpoint.h>

@protocol OS_nw_context, OS_nw_interface, OS_dnssd_cname_array;
@class NSObject, NSString;

@interface NWConcrete_nw_endpoint : NSObject <OS_nw_endpoint> {

	NSObject*<OS_nw_context> context;
	NSObject*<OS_nw_interface> interface;
	int interface_type;
	char* description;
	char* redacted_description;
	NWConcrete_nw_endpoint* parent_endpoint;
	NSObject*<OS_dnssd_cname_array> cname_array;
	nw_endpoint_alterative_s* first_alternative;
	SCD_Struct_NW28* alternative_list;
	os_unfair_lock_s endpoint_lock;
	os_unfair_lock_s description_lock;
	nw_hash_tableRef associations;
	unsigned short alternate_port;
	unsigned is_local_domain : 1;
	unsigned parent_is_proxy : 1;
	unsigned description_used : 1;
	unsigned redacted_description_used : 1;
	unsigned do_not_redact_description : 1;

}

@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,readonly) const char* domainForPolicy; 
@property (nonatomic,readonly) const char* hostname; 
@property (nonatomic,readonly) unsigned short port; 
@property (nonatomic,retain) NSObject*<OS_nw_txt_record> txtRecord; 
@property (assign,nonatomic) unsigned short priority; 
@property (assign,nonatomic) unsigned short weight; 
@property (nonatomic,readonly) const char* getDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(const char*)domainForPolicy;
-(unsigned short)port;
-(id)init;
-(void)setWeight:(unsigned short)arg1 ;
-(void)setTxtRecord:(NSObject*<OS_nw_txt_record>)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(unsigned short)weight;
-(char*)createDescription:(BOOL)arg1 ;
-(NSObject*<OS_nw_txt_record>)txtRecord;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(NSString *)description;
-(const char*)hostname;
-(unsigned)type;
-(const char*)getRedactedDescription;
-(const char*)getDescription;
-(id)redactedDescription;
-(unsigned short)priority;
-(id)copyDictionary;
-(void)setPriority:(unsigned short)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

