/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableIndexSet, NSSet;

@interface FBWorkspaceConnectionsState : NSObject <NSCopying, NSMutableCopying> {

	NSMutableIndexSet* _pidSet;

}

@property (nonatomic,readonly) unsigned long long serializedDataLength; 
@property (nonatomic,copy,readonly) NSSet * workspaceIdentities; 
+(unsigned long long)minimumSerializedDataLength;
+(id)deserializeLength:(out unsigned long long*)arg1 fromReader:(/*^block*/id)arg2 ;
-(id)_initWithIndexSet:(id)arg1 ;
-(id)init;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)copy;
-(unsigned long long)serializedDataLength;
-(unsigned long long)hash;
-(NSSet *)workspaceIdentities;
-(long long)serializeToWriter:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

