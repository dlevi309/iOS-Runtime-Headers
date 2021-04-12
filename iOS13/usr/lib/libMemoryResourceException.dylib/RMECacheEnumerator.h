/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)volume;
-(void)setVolume:(NSString *)arg1 ;
-(id)initCacheEnumeratorWithVolume:(id)arg1 ;
-(id)initCacheEnumerator;
-(id)nextValidURL;
-(NSDirectoryEnumerator *)internalEnumerator;
-(void)setInternalEnumerator:(NSDirectoryEnumerator *)arg1 ;
@end

