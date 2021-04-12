/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString, NSNumber;

@interface PFUbiquitySQLCorePeerRange : NSObject {

	NSString* _owningPeerID;
	NSString* _entityName;
	NSNumber* _rangeStart;
	NSNumber* _rangeEnd;
	NSNumber* _peerStart;
	NSNumber* _peerEnd;

}

@property (nonatomic,readonly) NSString * owningPeerID;              //@synthesize owningPeerID=_owningPeerID - In the implementation block
@property (nonatomic,readonly) NSString * entityName;                //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) NSNumber * rangeStart;                //@synthesize rangeStart=_rangeStart - In the implementation block
@property (nonatomic,readonly) NSNumber * rangeEnd;                  //@synthesize rangeEnd=_rangeEnd - In the implementation block
@property (nonatomic,readonly) NSNumber * peerStart;                 //@synthesize peerStart=_peerStart - In the implementation block
@property (nonatomic,readonly) NSNumber * peerEnd;                   //@synthesize peerEnd=_peerEnd - In the implementation block
-(NSString *)entityName;
-(NSNumber *)rangeEnd;
-(NSNumber *)peerEnd;
-(NSNumber *)rangeStart;
-(NSNumber *)peerStart;
-(NSString *)owningPeerID;
-(id)initWithOwningPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerStart:(id)arg5 peerEnd:(id)arg6 ;
-(id)description;
-(void)dealloc;
@end

