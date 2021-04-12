/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(NSData *)fileData;
-(void)setFileData:(NSData *)arg1 ;
@end

