/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


#import <Security/Security-Structs.h>
@class NSData;

@interface CTKClientSEP_SEParameters : NSObject {

	aks_params_sRef _params;
	NSData* _encoded;

}

@property (copy,readonly) NSData * data; 
@property (readonly) const void* bytes; 
@property (readonly) unsigned long long length; 
-(void)setData:(id)arg1 forKey:(unsigned)arg2 ;
-(id)init;
-(const void*)bytes;
-(unsigned long long)length;
-(void)setNumber:(long long)arg1 forKey:(unsigned)arg2 ;
-(NSData *)data;
-(id)initWithParameters:(id)arg1 ;
-(void)dealloc;
@end

