/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ENCypher;
@class ENGroupID, _ENGroupInfo, NSArray, NSData, NSSet;

@interface ENGroup : NSObject <NSSecureCoding> {

	ENGroupID* _groupID;
	id<ENCypher> _cypher;
	_ENGroupInfo* _groupInfo;

}

@property (nonatomic,retain) _ENGroupInfo * groupInfo;                      //@synthesize groupInfo=_groupInfo - In the implementation block
@property (nonatomic,retain) id<ENCypher> cypher;                           //@synthesize cypher=_cypher - In the implementation block
@property (nonatomic,readonly) ENGroupID * groupID;                         //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,readonly) NSArray * participants; 
@property (nonatomic,readonly) NSData * sharedApplicationData; 
@property (nonatomic,readonly) NSSet * destinations; 
+(BOOL)supportsSecureCoding;
+(id)sortedGroupsFromGroups:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ENGroupID *)groupID;
-(NSSet *)destinations;
-(NSArray *)participants;
-(id)accountIdentity;
-(id)verifyAndRevealData:(id)arg1 sendingDevice:(id)arg2 cypherIdentifier:(id)arg3 error:(id*)arg4 ;
-(void)setGroupInfo:(_ENGroupInfo *)arg1 ;
-(_ENGroupInfo *)groupInfo;
-(NSData *)sharedApplicationData;
-(id)initWithGroupInfo:(id)arg1 groupID:(id)arg2 cypher:(id)arg3 ;
-(id<ENCypher>)cypher;
-(void)setCypher:(id<ENCypher>)arg1 ;
-(id)signAndConcealData:(id)arg1 cypherIdentifier:(id*)arg2 error:(id*)arg3 ;
@end

