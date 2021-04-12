/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CRKRemoteEndpoint : NSObject <NSCopying> {

	unsigned short _port;
	NSString* _IPAddress;

}

@property (nonatomic,copy,readonly) NSString * IPAddress;                //@synthesize IPAddress=_IPAddress - In the implementation block
@property (nonatomic,readonly) unsigned short port;                      //@synthesize port=_port - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
-(unsigned short)port;
-(id)init;
-(NSString *)stringValue;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)IPAddress;
-(id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2 ;
-(BOOL)isOnSameHostAsRemoteEndpoint:(id)arg1 ;
-(BOOL)isOnSameHostButDifferentPortAsRemoteEndpoint:(id)arg1 ;
-(BOOL)isEqualToRemoteEndpoint:(id)arg1 ;
@end

