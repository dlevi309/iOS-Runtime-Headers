/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class PFUbiquityLocation, NSError;

@interface PFUbiquityLocationStatus : NSObject {

	BOOL _isLive;
	BOOL _isDeleted;
	BOOL _isDownloaded;
	BOOL _isDownloading;
	BOOL _isUploaded;
	BOOL _isUploading;
	BOOL _isImported;
	BOOL _isScheduled;
	BOOL _isExported;
	BOOL _isFailed;
	PFUbiquityLocation* _location;
	NSError* _error;
	unsigned long long _hash;
	long long _numBytes;
	long long _numNotifications;

}

@property (nonatomic,readonly) BOOL isLive;                                //@synthesize isLive=_isLive - In the implementation block
@property (nonatomic,readonly) BOOL isDeleted;                             //@synthesize isDeleted=_isDeleted - In the implementation block
@property (nonatomic,readonly) BOOL isDownloaded;                          //@synthesize isDownloaded=_isDownloaded - In the implementation block
@property (assign,nonatomic) BOOL isDownloading;                           //@synthesize isDownloading=_isDownloading - In the implementation block
@property (nonatomic,readonly) BOOL isUploaded;                            //@synthesize isUploaded=_isUploaded - In the implementation block
@property (nonatomic,readonly) BOOL isUploading;                           //@synthesize isUploading=_isUploading - In the implementation block
@property (nonatomic,readonly) BOOL isScheduled;                           //@synthesize isScheduled=_isScheduled - In the implementation block
@property (nonatomic,readonly) BOOL isImported;                            //@synthesize isImported=_isImported - In the implementation block
@property (nonatomic,readonly) BOOL isExported;                            //@synthesize isExported=_isExported - In the implementation block
@property (nonatomic,readonly) BOOL isFailed;                              //@synthesize isFailed=_isFailed - In the implementation block
@property (nonatomic,readonly) long long numBytes;                         //@synthesize numBytes=_numBytes - In the implementation block
@property (nonatomic,readonly) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long numNotifications;                 //@synthesize numNotifications=_numNotifications - In the implementation block
-(BOOL)isExported;
-(BOOL)isImported;
-(long long)numBytes;
-(BOOL)isDownloaded;
-(void)checkFileURLState;
-(void)logWasImported;
-(void)logWasScheduled;
-(void)logImportWasCancelled;
-(void)logWasExported;
-(void)encounteredError:(id)arg1 ;
-(void)recoveredFromError;
-(void)setIsDownloading:(BOOL)arg1 ;
-(BOOL)isUploaded;
-(BOOL)isUploading;
-(long long)numNotifications;
-(id)init;
-(PFUbiquityLocation *)location;
-(NSError *)error;
-(id)initWithLocation:(id)arg1 ;
-(void)statusDidChange;
-(BOOL)isDeleted;
-(id)description;
-(BOOL)isScheduled;
-(unsigned long long)hash;
-(BOOL)isDownloading;
-(BOOL)isFailed;
-(BOOL)isLive;
-(void)dealloc;
@end

