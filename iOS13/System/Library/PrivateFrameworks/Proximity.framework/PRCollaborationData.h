/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(PRPeer *)sendingPeer;
-(id)initWithData:(id)arg1 sendingPeer:(id)arg2 ;
@end

