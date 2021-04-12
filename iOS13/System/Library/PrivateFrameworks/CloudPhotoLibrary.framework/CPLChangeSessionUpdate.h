/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(NSString *)libraryVersion;
-(NSString *)statusDescription;
-(NSDate *)queuedDate;
-(BOOL)applyToStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardFromStore:(id)arg1 error:(id*)arg2 ;
-(id)storageForStatusInStore:(id)arg1 ;
-(id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1 ;
@end

