/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@class NSURL, NSMutableDictionary, NSDictionary;

@interface MSVSegmentedCodingPackage : NSObject {

	BOOL _needsInfoDictionaryUpdate;
	NSURL* _packageURL;
	Class _archivedClass;
	NSMutableDictionary* _segmentEncoderMap;
	NSMutableDictionary* _infoDictionary;

}

@property (nonatomic,copy) NSURL * packageURL;                                     //@synthesize packageURL=_packageURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * segmentEncoderMap;              //@synthesize segmentEncoderMap=_segmentEncoderMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * infoDictionary;                 //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (nonatomic,retain) Class archivedClass;                                  //@synthesize archivedClass=_archivedClass - In the implementation block
@property (nonatomic,readonly) NSDictionary * allVersions; 
+(id)packageTypeIdentifier;
-(id)initWithURL:(id)arg1 ;
-(NSMutableDictionary *)infoDictionary;
-(void)setInfoDictionary:(NSMutableDictionary *)arg1 ;
-(void)reset;
-(BOOL)deleteWithError:(id*)arg1 ;
-(void)setArchivedClass:(Class)arg1 ;
-(id)encoderForSegment:(id)arg1 version:(long long)arg2 ;
-(Class)archivedClass;
-(id)decodersWithError:(id*)arg1 ;
-(NSDictionary *)allVersions;
-(id)coderTypeForSegment:(id)arg1 ;
-(BOOL)writeWithError:(id*)arg1 ;
-(void)setNeedsInfoDictionaryUpdate;
-(BOOL)saveWithError:(id*)arg1 ;
-(NSURL *)packageURL;
-(void)setPackageURL:(NSURL *)arg1 ;
-(NSMutableDictionary *)segmentEncoderMap;
-(void)setSegmentEncoderMap:(NSMutableDictionary *)arg1 ;
@end

