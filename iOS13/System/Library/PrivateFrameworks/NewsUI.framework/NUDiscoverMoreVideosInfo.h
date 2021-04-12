/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SVDiscoverMoreConfigurationProviding.h>

@class NSString, NTPBDiscoverMoreVideosInfo;

@interface NUDiscoverMoreVideosInfo : NSObject <NSCopying, SVDiscoverMoreConfigurationProviding> {

	NTPBDiscoverMoreVideosInfo* _discoverMoreVideosInfo;

}

@property (nonatomic,copy,readonly) NTPBDiscoverMoreVideosInfo * discoverMoreVideosInfo;              //@synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionURLString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)actionURLString;
-(NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
-(id)initWithDiscoverMoreVideosInfo:(id)arg1 ;
@end

