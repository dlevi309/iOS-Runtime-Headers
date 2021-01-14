/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString, NSError;

@interface BLRestoreResponseItem : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _storeItemID;
	NSString* _downloadID;
	NSError* _error;

}

@property (nonatomic,retain) NSNumber * storeItemID;              //@synthesize storeItemID=_storeItemID - In the implementation block
@property (nonatomic,copy) NSString * downloadID;                 //@synthesize downloadID=_downloadID - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL success; 
+(BOOL)supportsSecureCoding;
-(BOOL)success;
-(void)setStoreItemID:(NSNumber *)arg1 ;
-(NSNumber *)storeItemID;
-(NSString *)downloadID;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)initWithCoder:(id)arg1 ;
-(void)setDownloadID:(NSString *)arg1 ;
-(id)initWithStoreItemID:(id)arg1 downloadID:(id)arg2 error:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

