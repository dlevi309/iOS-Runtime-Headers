/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CPLServerFeedbackRequest : PBRequest <NSCopying> {

	NSMutableArray* _messages;

}

@property (nonatomic,retain) NSMutableArray * messages;              //@synthesize messages=_messages - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)messages;
-(void)setMessages:(NSMutableArray *)arg1 ;
-(unsigned long long)messagesCount;
-(void)clearMessages;
-(void)addMessages:(id)arg1 ;
-(id)messagesAtIndex:(unsigned long long)arg1 ;
@end

