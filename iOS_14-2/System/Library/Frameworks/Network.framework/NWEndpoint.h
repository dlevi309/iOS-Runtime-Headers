/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_nw_endpoint;
@class NSObject, NWInterface, NSString, NSData;

@interface NWEndpoint : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying> {

	NSObject*<OS_nw_endpoint> _internalEndpoint;

}

@property (nonatomic,retain) NSObject*<OS_nw_endpoint> internalEndpoint;              //@synthesize internalEndpoint=_internalEndpoint - In the implementation block
@property (nonatomic,retain) NWInterface * interface; 
@property (nonatomic,readonly) NSString * parentEndpointDomain; 
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (assign,nonatomic) unsigned short alternatePort; 
@property (assign,nonatomic) long long remoteInterfaceType; 
@property (nonatomic,retain) NSData * txtRecord; 
+(BOOL)supportsSecureCoding;
+(id)endpointWithInternalEndpoint:(id)arg1 ;
+(unsigned)endpointType;
+(BOOL)supportsResolverCallback;
+(Class)copyClassForEndpointType:(int)arg1 ;
+(id)endpointWithProtocolBufferData:(id)arg1 ;
+(id)endpointWithCEndpoint:(id)arg1 ;
-(unsigned short)alternatePort;
-(long long)remoteInterfaceType;
-(NSString *)parentEndpointDomain;
-(NSString *)privateDescription;
-(void)setInterface:(NWInterface *)arg1 ;
-(void)resolveEndpointWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRemoteInterfaceType:(long long)arg1 ;
-(id)createProtocolBufferObject;
-(id)initWithEndpoint:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTxtRecord:(NSData *)arg1 ;
-(NWInterface *)interface;
-(id)copyCEndpoint;
-(id)initWithEncodedData:(id)arg1 ;
-(NSData *)txtRecord;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(void)setInternalEndpoint:(NSObject*<OS_nw_endpoint>)arg1 ;
-(id)description;
-(void)setAlternatePort:(unsigned short)arg1 ;
-(id)encodedData;
-(NSObject*<OS_nw_endpoint>)internalEndpoint;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

