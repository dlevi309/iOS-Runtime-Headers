/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface CPLChangeSessionUpdate : NSObject <NSSecureCoding> {

	NSString* _libraryVersion;
	NSDate* _queuedDate;

}

@property (nonatomic,copy,readonly) NSString * libraryVersion;              //@synthesize libraryVersion=_libraryVersion - In the implementation block
@property (nonatomic,readonly) NSDate * queuedDate;                         //@synthesize queuedDate=_queuedDate - In the implementation block
@property (nonatomic,readonly) NSString * statusDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithStore:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)libraryVersion;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)statusDescription;
-(BOOL)applyToStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardFromStore:(id)arg1 error:(id*)arg2 ;
-(id)storageForStatusInStore:(id)arg1 ;
-(id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1 ;
-(NSDate *)queuedDate;
@end

