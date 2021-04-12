/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/

#import <DataAccess/DAAction.h>

@class NSString;

@interface DAMoveAction : DAAction {

	NSString* _sourceContainerId;
	NSString* _sourceServerId;
	NSString* _destinationContainerId;

}

@property (nonatomic,retain) NSString * sourceContainerId;                   //@synthesize sourceContainerId=_sourceContainerId - In the implementation block
@property (nonatomic,retain) NSString * sourceServerId;                      //@synthesize sourceServerId=_sourceServerId - In the implementation block
@property (nonatomic,retain) NSString * destinationContainerId;              //@synthesize destinationContainerId=_destinationContainerId - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSourceContainerId:(NSString *)arg1 ;
-(void)setSourceServerId:(NSString *)arg1 ;
-(void)setDestinationContainerId:(NSString *)arg1 ;
-(NSString *)sourceContainerId;
-(NSString *)sourceServerId;
-(NSString *)destinationContainerId;
-(id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 sourceContainerId:(id)arg3 sourceServerId:(id)arg4 destinationContainerId:(id)arg5 ;
@end

