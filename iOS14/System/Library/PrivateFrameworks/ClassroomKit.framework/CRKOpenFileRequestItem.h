/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CRKOpenFileRequestItem : NSObject <NSSecureCoding> {

	NSData* _fileData;
	NSString* _fileName;

}

@property (nonatomic,copy) NSData * fileData;                //@synthesize fileData=_fileData - In the implementation block
@property (nonatomic,copy) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFileName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)fileName;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)fileData;
-(void)setFileData:(NSData *)arg1 ;
@end

