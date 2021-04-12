/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSURL, NSMutableArray, NSError, NSMetadataQuery, NSString;

@interface CLSAsset : CLSObject <CLSRelationable> {

	NSURL* _url;
	BOOL _uploaded;
	unsigned long long _uploadState;
	BOOL _observingUploadProgress;
	NSMutableArray* _uploadObservers;
	long long _totalUnitCount;
	long long _completedUnitCount;
	NSError* _sharingError;
	NSMetadataQuery* _query;
	BOOL _setupCKShare;
	BOOL _original;
	NSString* _ownerPersonID;
	double _fractionUploaded;
	NSError* _uploadError;
	NSString* _brItemID;
	NSString* _brOwnerName;
	NSString* _brZoneName;
	NSString* _brShareName;
	NSString* _ubiquitousContainerName;
	NSString* _relativePathWithinContainer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double fractionUploaded;                           //@synthesize fractionUploaded=_fractionUploaded - In the implementation block
@property (nonatomic,readonly) NSError * uploadError;                             //@synthesize uploadError=_uploadError - In the implementation block
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSString * ownerPersonID;                            //@synthesize ownerPersonID=_ownerPersonID - In the implementation block
@property (nonatomic,retain) NSString * brItemID;                                 //@synthesize brItemID=_brItemID - In the implementation block
@property (nonatomic,retain) NSString * brOwnerName;                              //@synthesize brOwnerName=_brOwnerName - In the implementation block
@property (nonatomic,retain) NSString * brZoneName;                               //@synthesize brZoneName=_brZoneName - In the implementation block
@property (nonatomic,retain) NSString * brShareName;                              //@synthesize brShareName=_brShareName - In the implementation block
@property (nonatomic,retain) NSString * ubiquitousContainerName;                  //@synthesize ubiquitousContainerName=_ubiquitousContainerName - In the implementation block
@property (nonatomic,retain) NSString * relativePathWithinContainer;              //@synthesize relativePathWithinContainer=_relativePathWithinContainer - In the implementation block
@property (assign,getter=isUploaded,nonatomic) BOOL uploaded; 
@property (assign,getter=isOriginal,nonatomic) BOOL original;                     //@synthesize original=_original - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL; 
+(BOOL)supportsSecureCoding;
+(id)relations;
-(void)setUploaded:(BOOL)arg1 ;
-(BOOL)isUploaded;
-(id)initWithURL:(id)arg1 ;
-(void)addUploadObserver:(id)arg1 ;
-(void)removeUploadObserver:(id)arg1 ;
-(BOOL)deleteFile:(id*)arg1 ;
-(void)setOriginal:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)uploadError;
-(id)_init;
-(NSString *)ownerPersonID;
-(NSString *)brItemID;
-(void)mergeWithObject:(id)arg1 ;
-(BOOL)isOriginal;
-(BOOL)validateObject:(id*)arg1 ;
-(void)setOwnerPersonID:(NSString *)arg1 ;
-(void)willSaveObject;
-(void)createShareIfNeeded:(/*^block*/id)arg1 ;
-(NSString *)brZoneName;
-(NSString *)brOwnerName;
-(void)urlSuitableForOpeningWithCompletion:(/*^block*/id)arg1 ;
-(void)setBrItemID:(NSString *)arg1 ;
-(void)setBrOwnerName:(NSString *)arg1 ;
-(void)setBrZoneName:(NSString *)arg1 ;
-(NSString *)brShareName;
-(void)setBrShareName:(NSString *)arg1 ;
-(NSString *)ubiquitousContainerName;
-(void)setUbiquitousContainerName:(NSString *)arg1 ;
-(NSString *)relativePathWithinContainer;
-(void)setRelativePathWithinContainer:(NSString *)arg1 ;
-(id)_initWithFileURL:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 withOwnerPersonID:(id)arg2 ;
-(void)uploadStateChanged:(unsigned long long)arg1 ;
-(id)uploadObservers;
-(void)queued_startObservingUploadProgress;
-(void)queued_notifyUploadProgress;
-(void)queued_stopObservingUploadProgress;
-(void)queued_notifyUploadCompletion;
-(void)queryGatheredData:(id)arg1 ;
-(void)queryUpdated:(id)arg1 ;
-(void)processItems:(id)arg1 ;
-(void)createShareIfNeeded_Imp:(/*^block*/id)arg1 ;
-(void)fetchUsersAndAddToShare:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)deleteFileAtURL:(id)arg1 error:(id*)arg2 ;
-(void)deleteFileWithCompletion:(/*^block*/id)arg1 ;
-(id)uploadFileIfNeeded:(id*)arg1 ;
-(double)fractionUploaded;
@end

