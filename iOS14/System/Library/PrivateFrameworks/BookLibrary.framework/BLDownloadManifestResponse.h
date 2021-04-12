/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface BLDownloadManifestResponse : NSObject <NSSecureCoding> {

	NSArray* _validDownloadIDs;

}

@property (nonatomic,copy) NSArray * validDownloadIDs;              //@synthesize validDownloadIDs=_validDownloadIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setValidDownloadIDs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)validDownloadIDs;
-(id)initWithSSDownloadManifestResponse:(id)arg1 ;
@end

