/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/


@class NSDirectoryEnumerator, NSString;

@interface RMECacheEnumerator : NSObject {

	NSDirectoryEnumerator* _internalEnumerator;
	NSString* _volume;

}

@property (nonatomic,copy) NSDirectoryEnumerator * internalEnumerator;              //@synthesize internalEnumerator=_internalEnumerator - In the implementation block
@property (nonatomic,retain) NSString * volume;                                     //@synthesize volume=_volume - In the implementation block
+(id)getLogContainer:(BOOL)arg1 ;
+(id)getLogPathsSortedByTime;
+(id)getLogPathsForSystemDiagnostic;
+(id)getEPLProfilePath;
-(void)setVolume:(NSString *)arg1 ;
-(NSString *)volume;
-(id)initCacheEnumeratorWithVolume:(id)arg1 ;
-(id)initCacheEnumerator;
-(id)nextValidURL;
-(NSDirectoryEnumerator *)internalEnumerator;
-(void)setInternalEnumerator:(NSDirectoryEnumerator *)arg1 ;
@end

