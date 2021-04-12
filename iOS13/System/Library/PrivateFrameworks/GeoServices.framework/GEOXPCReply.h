/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject, NSError;

@interface GEOXPCReply : NSObject <NSSecureCoding> {

	unsigned char _flags;
	NSObject*<OS_xpc_object> _object;
	NSError* _error;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> object;                         //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> replyDictionary; 
@property (nonatomic,readonly) unsigned char flags;                                   //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(NSObject*<OS_xpc_object>)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(NSObject*<OS_xpc_object>)arg1 ;
-(unsigned char)flags;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)send;
-(id)initWithRequest:(id)arg1 ;
-(NSObject*<OS_xpc_object>)replyDictionary;
@end

