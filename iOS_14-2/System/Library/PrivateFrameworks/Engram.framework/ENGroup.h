/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)accountIdentity;
-(id)verifyAndRevealData:(id)arg1 sendingDevice:(id)arg2 cypherIdentifier:(id)arg3 error:(id*)arg4 ;
-(NSSet *)destinations;
-(ENGroupID *)groupID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)participants;
-(id)description;
-(_ENGroupInfo *)groupInfo;
-(id<ENCypher>)cypher;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setGroupInfo:(_ENGroupInfo *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)sharedApplicationData;
-(id)initWithGroupInfo:(id)arg1 groupID:(id)arg2 cypher:(id)arg3 ;
-(void)setCypher:(id<ENCypher>)arg1 ;
-(id)signAndConcealData:(id)arg1 cypherIdentifier:(id*)arg2 error:(id*)arg3 ;
@end

