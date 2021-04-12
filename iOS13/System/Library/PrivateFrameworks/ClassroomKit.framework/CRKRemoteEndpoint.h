/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(unsigned short)port;
-(NSString *)IPAddress;
-(id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2 ;
-(BOOL)isOnSameHostAsRemoteEndpoint:(id)arg1 ;
-(BOOL)isOnSameHostButDifferentPortAsRemoteEndpoint:(id)arg1 ;
-(BOOL)isEqualToRemoteEndpoint:(id)arg1 ;
@end

