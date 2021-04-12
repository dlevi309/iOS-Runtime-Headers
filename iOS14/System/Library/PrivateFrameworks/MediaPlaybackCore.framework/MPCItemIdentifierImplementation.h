/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPCItemIdentifier.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPCItemIdentifierImplementation : NSObject <MPCItemIdentifier, NSCopying> {

	NSString* _contentItemID;
	long long _repeatIndex;

}

@property (nonatomic,copy) NSString * contentItemID;                //@synthesize contentItemID=_contentItemID - In the implementation block
@property (assign,nonatomic) long long repeatIndex;                 //@synthesize repeatIndex=_repeatIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifierForMFQueuePlayerItem:(id)arg1 ;
-(NSString *)description;
-(void)setContentItemID:(NSString *)arg1 ;
-(long long)repeatIndex;
-(void)setRepeatIndex:(long long)arg1 ;
-(NSString *)contentItemID;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithContentItemID:(id)arg1 repeatIndex:(long long)arg2 ;
@end

