/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelPlayEvent, MPModelGenericObject;

@interface MPCPlaybackHistoryRecordChangeRequest : NSObject <NSCopying> {

	BOOL _allowsStoreContainerImport;
	MPModelPlayEvent* _playEvent;
	MPModelGenericObject* _itemGenericObject;
	long long _type;

}

@property (assign,nonatomic) BOOL allowsStoreContainerImport;                       //@synthesize allowsStoreContainerImport=_allowsStoreContainerImport - In the implementation block
@property (nonatomic,retain) MPModelPlayEvent * playEvent;                          //@synthesize playEvent=_playEvent - In the implementation block
@property (nonatomic,retain) MPModelGenericObject * itemGenericObject;              //@synthesize itemGenericObject=_itemGenericObject - In the implementation block
@property (assign,nonatomic) long long type;                                        //@synthesize type=_type - In the implementation block
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(MPModelPlayEvent *)playEvent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItemGenericObject:(MPModelGenericObject *)arg1 ;
-(void)setPlayEvent:(MPModelPlayEvent *)arg1 ;
-(void)setAllowsStoreContainerImport:(BOOL)arg1 ;
-(MPModelGenericObject *)itemGenericObject;
-(BOOL)allowsStoreContainerImport;
@end

