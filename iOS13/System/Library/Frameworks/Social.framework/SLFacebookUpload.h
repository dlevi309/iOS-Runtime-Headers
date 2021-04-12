/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SLFacebookUpload : NSObject <NSSecureCoding> {

	NSString* _uploadID;
	long long _uploadType;
	unsigned long long _totalBytes;
	unsigned long long _transferredBytes;

}

@property (nonatomic,retain) NSString * uploadID;                              //@synthesize uploadID=_uploadID - In the implementation block
@property (assign,nonatomic) long long uploadType;                             //@synthesize uploadType=_uploadType - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytes;                    //@synthesize totalBytes=_totalBytes - In the implementation block
@property (assign,nonatomic) unsigned long long transferredBytes;              //@synthesize transferredBytes=_transferredBytes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)totalBytes;
-(void)setTotalBytes:(unsigned long long)arg1 ;
-(NSString *)uploadID;
-(void)setUploadID:(NSString *)arg1 ;
-(long long)uploadType;
-(void)setUploadType:(long long)arg1 ;
-(unsigned long long)transferredBytes;
-(void)setTransferredBytes:(unsigned long long)arg1 ;
@end

