/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface JFXEffectAssetRequestOptions : NSObject <NSCopying> {

	BOOL _networkAccessDisabled;
	NSArray* _filterOptionsArray;
	long long _priority;

}

@property (nonatomic,retain) NSArray * filterOptionsArray;                                           //@synthesize filterOptionsArray=_filterOptionsArray - In the implementation block
@property (assign,getter=isNetworkAccessDisabled,nonatomic) BOOL networkAccessDisabled;              //@synthesize networkAccessDisabled=_networkAccessDisabled - In the implementation block
@property (assign,nonatomic) long long priority;                                                     //@synthesize priority=_priority - In the implementation block
-(id)init;
-(long long)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(NSArray *)filterOptionsArray;
-(void)setFilterOptionsArray:(NSArray *)arg1 ;
-(BOOL)isNetworkAccessDisabled;
-(void)setNetworkAccessDisabled:(BOOL)arg1 ;
@end

