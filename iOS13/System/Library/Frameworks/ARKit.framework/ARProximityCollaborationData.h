/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARSensorData.h>

@class PRCollaborationData, PRPeer, NSString;

@interface ARProximityCollaborationData : NSObject <ARSensorData> {

	double timestamp;
	PRCollaborationData* _collaborationData;
	PRPeer* _peer;

}

@property (nonatomic,readonly) PRCollaborationData * collaborationData;              //@synthesize collaborationData=_collaborationData - In the implementation block
@property (nonatomic,readonly) PRPeer * peer;                                        //@synthesize peer=_peer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double timestamp; 
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(PRPeer *)peer;
-(id)initWithPRCollaborationData:(id)arg1 peer:(id)arg2 ;
-(PRCollaborationData *)collaborationData;
@end

