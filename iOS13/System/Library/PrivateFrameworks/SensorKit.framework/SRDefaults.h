/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/


@class NSString;

@interface SRDefaults : NSObject {

	unsigned long long _datastoreVersion;
	unsigned long long _segmentSize;
	unsigned long long _metadataSize;
	unsigned long long _maxAllowedMappedPages;
	float _segmentResizeFactor;
	float _segmentPaddingFactor;
	NSString* _className;
	NSString* _exportingClassName;

}

@property (nonatomic,readonly) unsigned long long datastoreVersion;                   //@synthesize datastoreVersion=_datastoreVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long segmentSize;                        //@synthesize segmentSize=_segmentSize - In the implementation block
@property (nonatomic,readonly) unsigned long long maxAllowedMappedPages;              //@synthesize maxAllowedMappedPages=_maxAllowedMappedPages - In the implementation block
@property (nonatomic,readonly) float segmentResizeFactor;                             //@synthesize segmentResizeFactor=_segmentResizeFactor - In the implementation block
@property (nonatomic,readonly) float segmentPaddingFactor;                            //@synthesize segmentPaddingFactor=_segmentPaddingFactor - In the implementation block
@property (nonatomic,readonly) NSString * className;                                  //@synthesize className=_className - In the implementation block
@property (nonatomic,readonly) NSString * exportingClassName;                         //@synthesize exportingClassName=_exportingClassName - In the implementation block
@property (nonatomic,readonly) unsigned long long metadataSize;                       //@synthesize metadataSize=_metadataSize - In the implementation block
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)className;
-(unsigned long long)segmentSize;
-(unsigned long long)metadataSize;
-(NSString *)exportingClassName;
-(unsigned long long)datastoreVersion;
-(unsigned long long)maxAllowedMappedPages;
-(float)segmentResizeFactor;
-(float)segmentPaddingFactor;
@end

