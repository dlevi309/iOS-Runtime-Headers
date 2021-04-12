/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, NSDictionary, NSMutableArray, NSArray, NSDate, NSMutableDictionary;

@interface VMUProcessDescription : NSObject {

	unsigned _task;
	int _pid;
	BOOL _taskIsCorpse;
	NSString* _hardwareModel;
	NSString* _processName;
	BOOL _processNameNeedsCorrection;
	NSString* _executablePath;
	CSTypeRef _symbolicator;
	BOOL _executablePathNeedsCorrection;
	unsigned long long _executableLoadAddress;
	int _cpuType;
	BOOL _is64Bit;
	timeval _proc_starttime;
	unsigned long long _physicalFootprint;
	unsigned long long _physicalFootprintPeak;
	NSDictionary* _lsApplicationInformation;
	NSMutableArray* _binaryImages;
	NSArray* _sortedBinaryImages;
	NSDictionary* _binaryImageHints;
	NSArray* _unreadableBinaryImagePaths;
	BOOL _binaryImagePostProcessingComplete;
	NSDictionary* _buildVersionDictionary;
	NSDictionary* _osVersionDictionary;
	mapped_memory_tRef _mappedMemory;
	NSString* _parentProcessName;
	NSString* _parentExecutablePath;
	int _ppid;
	NSDate* _date;
	NSMutableDictionary* _environment;

}

@property (nonatomic,readonly) unsigned long long physicalFootprint;                  //@synthesize physicalFootprint=_physicalFootprint - In the implementation block
@property (nonatomic,readonly) unsigned long long physicalFootprintPeak;              //@synthesize physicalFootprintPeak=_physicalFootprintPeak - In the implementation block
+(id)parseBinaryImagesDescription:(id)arg1 ;
+(CSTypeRef)symbolicatorFromBinaryImagesDescription:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)date;
-(id)processIdentifier;
-(id)bundleIdentifier;
-(id)executablePath;
-(id)processName;
-(id)displayName;
-(int)pid;
-(unsigned)task;
-(int)cpuType;
-(BOOL)is64Bit;
-(id)processVersion;
-(id)initWithTask:(unsigned)arg1 getBinariesList:(BOOL)arg2 ;
-(id)binaryImagesDescription;
-(unsigned long long)physicalFootprint;
-(unsigned long long)physicalFootprintPeak;
-(BOOL)initFromCorpse;
-(void)initFromLiveProcess;
-(void)_libraryLoaded:(CSTypeRef)arg1 ;
-(void)cleansePathsIncludingBinaryImageList:(BOOL)arg1 ;
-(id)binaryImages;
-(id)processVersionDictionary;
-(id)_sanitizeVersion:(id)arg1 ;
-(void)setCrashReporterInfo;
-(id)_bundleLock;
-(void)clearCrashReporterInfo;
-(id)_rangesOfBinaryImages:(id)arg1 forBacktraces:(id)arg2 ;
-(id)_binaryImagesDescriptionForRanges:(id)arg1 ;
-(id)_buildVersionDictionary;
-(id)_osVersionDictionary;
-(id)_buildInfoDescription;
-(id)_cpuTypeDescription;
-(id)parentProcessName;
-(id)_systemVersionDescription;
-(id)processDescriptionHeader;
-(id)dateAndVersionDescription;
-(id)processStatisticsDescription;
-(id)initWithPid:(int)arg1 orTask:(unsigned)arg2 ;
-(int)parentPid;
-(id)parentProcessPath;
-(BOOL)isAppleApplication;
-(id)binaryImageDictionaryForAddress:(unsigned long long)arg1 ;
-(id)valueForEnvVar:(id)arg1 ;
-(id)binaryImagesDescriptionForBacktraces:(id)arg1 ;
@end

