/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSUUID, NSSet, PRCollaborationData, PRPeer;

@interface ARCollaborationData : NSObject <NSSecureCoding> {

	long long _priority;
	long long _version;
	double _timestamp;
	NSData* _vioData;
	long long _vioDataType;
	unsigned long long _vioSessionID;
	NSUUID* _anchorIdentifier;
	NSSet* _anchors;
	PRCollaborationData* _prCollaborationData;
	PRPeer* _prPeer;

}

@property (nonatomic,readonly) long long version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) double timestamp;                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSData * vioData;                                     //@synthesize vioData=_vioData - In the implementation block
@property (nonatomic,readonly) long long vioDataType;                                //@synthesize vioDataType=_vioDataType - In the implementation block
@property (nonatomic,readonly) unsigned long long vioSessionID;                      //@synthesize vioSessionID=_vioSessionID - In the implementation block
@property (nonatomic,retain) NSUUID * anchorIdentifier;                              //@synthesize anchorIdentifier=_anchorIdentifier - In the implementation block
@property (nonatomic,retain) NSSet * anchors;                                        //@synthesize anchors=_anchors - In the implementation block
@property (nonatomic,retain) PRCollaborationData * prCollaborationData;              //@synthesize prCollaborationData=_prCollaborationData - In the implementation block
@property (nonatomic,retain) PRPeer * prPeer;                                        //@synthesize prPeer=_prPeer - In the implementation block
@property (nonatomic,readonly) long long priority;                                   //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)version;
-(double)timestamp;
-(long long)priority;
-(NSSet *)anchors;
-(void)setAnchors:(NSSet *)arg1 ;
-(NSUUID *)anchorIdentifier;
-(void)setAnchorIdentifier:(NSUUID *)arg1 ;
-(unsigned long long)vioSessionID;
-(NSData *)vioData;
-(long long)vioDataType;
-(id)initWithVIOData:(id)arg1 type:(long long)arg2 sessionID:(unsigned long long)arg3 ;
-(PRCollaborationData *)prCollaborationData;
-(PRPeer *)prPeer;
-(id)initWithProximityCollaborationData:(id)arg1 sessionID:(unsigned long long)arg2 ;
-(void)setPrCollaborationData:(PRCollaborationData *)arg1 ;
-(void)setPrPeer:(PRPeer *)arg1 ;
@end

