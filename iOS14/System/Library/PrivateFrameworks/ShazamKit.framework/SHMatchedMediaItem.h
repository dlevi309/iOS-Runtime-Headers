/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <ShazamKit/SHMediaItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SHSyncedLyrics, NSString;

@interface SHMatchedMediaItem : SHMediaItem <NSSecureCoding> {

	SHSyncedLyrics* _syncedLyrics;

}

@property (nonatomic,readonly) long long matchScore; 
@property (nonatomic,readonly) SHSyncedLyrics * syncedLyrics;                    //@synthesize syncedLyrics=_syncedLyrics - In the implementation block
@property (nonatomic,readonly) float timeSkew; 
@property (nonatomic,readonly) float frequencySkew; 
@property (nonatomic,readonly) double offset; 
@property (nonatomic,copy,readonly) NSString * syncedLyricsSnippet; 
+(BOOL)supportsSecureCoding;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)offset;
-(id)initWithCoder:(id)arg1 ;
-(float)timeSkew;
-(id)initWithMatchedMediaItemDictionary:(id)arg1 ;
-(id)initWithMatchedMediaItemDictionary:(id)arg1 syncedLyrics:(id)arg2 ;
-(id)updateSyncedLyricsInMediaItemDictionary:(id)arg1 syncedLyrics:(id)arg2 ;
-(SHSyncedLyrics *)syncedLyrics;
-(float)frequencySkew;
-(long long)matchScore;
-(NSString *)syncedLyricsSnippet;
@end

