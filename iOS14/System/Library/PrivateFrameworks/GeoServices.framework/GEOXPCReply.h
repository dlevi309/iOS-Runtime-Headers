/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOXPCSerializable.h>

@protocol OS_xpc_object;
@class NSObject, NSError, NSString;

@interface GEOXPCReply : NSObject <GEOXPCSerializable> {

	unsigned char _flags;
	NSObject*<OS_xpc_object> _object;
	NSError* _error;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> object;                         //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> replyDictionary; 
@property (nonatomic,readonly) unsigned char flags;                                   //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned char)flags;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(NSObject*<OS_xpc_object>)object;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setObject:(NSObject*<OS_xpc_object>)arg1 ;
-(NSString *)description;
-(id)initWithRequest:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_xpc_object>)replyDictionary;
-(void)send;
@end

