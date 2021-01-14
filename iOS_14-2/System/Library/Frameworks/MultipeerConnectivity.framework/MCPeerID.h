/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
*/

#import <MultipeerConnectivity/MultipeerConnectivity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MCPeerIDInternal, NSString;

@interface MCPeerID : NSObject <NSCopying, NSSecureCoding> {

	MCPeerIDInternal* _internal;

}

@property (nonatomic,readonly) NSString * displayName; 
+(BOOL)supportsSecureCoding;
-(id)serializedRepresentation;
-(unsigned)pid;
-(id)init;
-(unsigned long long)pid64;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)idString;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithDisplayName:(id)arg1 ;
-(id)displayNameAndPID;
-(id)initWithIDString:(id)arg1 displayName:(id)arg2 ;
-(id)internalDescription;
-(id)initWithPID:(unsigned)arg1 displayName:(id)arg2 ;
@end

