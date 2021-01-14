/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableDictionary *)infoDictionary;
-(void)setInfoDictionary:(NSMutableDictionary *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)packageURL;
-(BOOL)deleteWithError:(id*)arg1 ;
-(BOOL)saveWithError:(id*)arg1 ;
-(void)reset;
-(void)setArchivedClass:(Class)arg1 ;
-(id)encoderForSegment:(id)arg1 version:(long long)arg2 ;
-(Class)archivedClass;
-(NSDictionary *)allVersions;
-(id)decodersWithError:(id*)arg1 ;
-(id)coderTypeForSegment:(id)arg1 ;
-(BOOL)writeWithError:(id*)arg1 ;
-(void)setNeedsInfoDictionaryUpdate;
-(void)setPackageURL:(NSURL *)arg1 ;
-(NSMutableDictionary *)segmentEncoderMap;
-(void)setSegmentEncoderMap:(NSMutableDictionary *)arg1 ;
@end

