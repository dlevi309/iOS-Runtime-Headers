/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelObject;

@interface MPModelLibraryKeepLocalChangeRequest : NSObject <NSCopying> {

	MPModelObject* _modelObject;
	long long _enableState;

}

@property (nonatomic,retain) MPModelObject * modelObject;              //@synthesize modelObject=_modelObject - In the implementation block
@property (assign,nonatomic) long long enableState;                    //@synthesize enableState=_enableState - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelObject *)modelObject;
-(void)setModelObject:(MPModelObject *)arg1 ;
-(long long)enableState;
-(void)setEnableState:(long long)arg1 ;
@end

