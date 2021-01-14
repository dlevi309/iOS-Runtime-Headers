/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/EmailCore-Structs.h>
#import <libobjc.A.dylib/ECTransferMessageActionItemBuilder.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol ECMessage;
@class NSString;

@interface ECTransferMessageActionItem : NSObject <ECTransferMessageActionItemBuilder, NSCopying> {

	NSString* _sourceRemoteID;
	id<ECMessage> _sourceMessage;
	id<ECMessage> _destinationMessage;

}

@property (nonatomic,copy) NSString * sourceRemoteID;                       //@synthesize sourceRemoteID=_sourceRemoteID - In the implementation block
@property (nonatomic,retain) id<ECMessage> sourceMessage;                   //@synthesize sourceMessage=_sourceMessage - In the implementation block
@property (nonatomic,retain) id<ECMessage> destinationMessage;              //@synthesize destinationMessage=_destinationMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(id<ECMessage>)destinationMessage;
-(NSString *)sourceRemoteID;
-(id<ECMessage>)sourceMessage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSourceRemoteID:(NSString *)arg1 ;
-(void)setSourceMessage:(id<ECMessage>)arg1 ;
-(void)setDestinationMessage:(id<ECMessage>)arg1 ;
@end

