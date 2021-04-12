/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/NowPlaying-iOS.feature/NowPlaying-iOS
*/


@class NSString;

@interface _ACCNowPlayingPBQUpdateRequest : NSObject {

	BOOL _allowNonLibrary;
	unsigned _startIndex;
	unsigned _upToCount;
	unsigned _infoMask;
	NSString* _requestID;
	unsigned long long _startTimeMs;

}

@property (nonatomic,readonly) NSString * requestID;                      //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) unsigned startIndex;                         //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) unsigned upToCount;                          //@synthesize upToCount=_upToCount - In the implementation block
@property (assign,nonatomic) unsigned infoMask;                           //@synthesize infoMask=_infoMask - In the implementation block
@property (assign,nonatomic) BOOL allowNonLibrary;                        //@synthesize allowNonLibrary=_allowNonLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long startTimeMs;              //@synthesize startTimeMs=_startTimeMs - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned)startIndex;
-(void)setStartIndex:(unsigned)arg1 ;
-(NSString *)requestID;
-(id)initWithID:(id)arg1 startIndex:(unsigned)arg2 upToCount:(unsigned)arg3 infoMask:(unsigned)arg4 allowNonLibrary:(BOOL)arg5 ;
-(unsigned)upToCount;
-(void)setUpToCount:(unsigned)arg1 ;
-(unsigned)infoMask;
-(void)setInfoMask:(unsigned)arg1 ;
-(BOOL)allowNonLibrary;
-(void)setAllowNonLibrary:(BOOL)arg1 ;
-(unsigned long long)startTimeMs;
-(void)setStartTimeMs:(unsigned long long)arg1 ;
@end

