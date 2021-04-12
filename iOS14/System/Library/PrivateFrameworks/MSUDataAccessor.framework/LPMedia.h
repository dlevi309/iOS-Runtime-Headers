/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MSUDataAccessor.framework/MSUDataAccessor
*/


@interface LPMedia : NSObject {

	unsigned _ioMedia;

}

@property (assign) unsigned ioMedia;              //@synthesize ioMedia=_ioMedia - In the implementation block
+(id)allMedia;
+(id)supportedContentTypes;
+(id)mediaForPath:(id)arg1 ;
+(id)mediaForUUID:(id)arg1 ;
+(id)mediaOfCorrectTypeGivenIOMedia:(unsigned)arg1 ;
+(id)mediaForPath:(id)arg1 snapshotName:(id*)arg2 ;
+(id)liveMediaForSnapshotAtPath:(id)arg1 ;
+(unsigned)_copyIOMediaForDiskWithPath:(id)arg1 ;
+(unsigned)_copyLiveFilesystemIOMediaForRootedSnapshot;
+(id)mediaForPath:(id)arg1 isSnapshot:(BOOL*)arg2 ;
+(id)snapshotNameForMediaForPath:(id)arg1 ;
+(id)mediaForBSDNameOrDeviceNode:(id)arg1 ;
+(id)contentTypeToSubclassMap;
-(BOOL)isInternal;
-(id)mountPoint;
-(id)BSDName;
-(id)content;
-(unsigned)ioMedia;
-(BOOL)isWhole;
-(id)mediaUUID;
-(id)devNodePath;
-(id)getStringPropertyWithName:(id)arg1 ;
-(id)initWithIOMediaObject:(unsigned)arg1 ;
-(BOOL)getBoolPropertyWithName:(id)arg1 ;
-(void)setIoMedia:(unsigned)arg1 ;
-(BOOL)isInternalAndIsRootDevice:(BOOL*)arg1 ;
-(id)wholeMediaForMedia;
-(BOOL)setName:(id)arg1 withError:(id*)arg2 ;
-(id)name;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

