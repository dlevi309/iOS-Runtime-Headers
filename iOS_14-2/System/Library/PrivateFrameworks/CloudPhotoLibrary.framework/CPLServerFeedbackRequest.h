/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setMessages:(NSMutableArray *)arg1 ;
-(unsigned long long)messagesCount;
-(void)clearMessages;
-(void)mergeFrom:(id)arg1 ;
-(id)messagesAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(NSMutableArray *)messages;
-(unsigned long long)hash;
-(void)addMessages:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

