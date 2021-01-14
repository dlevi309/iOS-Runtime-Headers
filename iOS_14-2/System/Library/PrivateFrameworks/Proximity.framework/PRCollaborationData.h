/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <Proximity/Proximity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, PRPeer;

@interface PRCollaborationData : NSObject <NSCopying, NSSecureCoding> {

	NSData* _data;
	PRPeer* _sendingPeer;

}

@property (readonly) NSData * data;                     //@synthesize data=_data - In the implementation block
@property (readonly) PRPeer * sendingPeer;              //@synthesize sendingPeer=_sendingPeer - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(PRPeer *)sendingPeer;
-(id)initWithData:(id)arg1 sendingPeer:(id)arg2 ;
@end

