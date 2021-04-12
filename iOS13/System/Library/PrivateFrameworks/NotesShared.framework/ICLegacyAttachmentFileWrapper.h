/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <Foundation/NSFileWrapper.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface ICLegacyAttachmentFileWrapper : NSFileWrapper <NSSecureCoding> {

	NSURL* _cidURL;

}

@property (nonatomic,retain) NSURL * cidURL;                                 //@synthesize cidURL=_cidURL - In the implementation block
@property (nonatomic,readonly) NSString * attachmentIdentifier; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)attachmentIdentifier;
-(void)setCidURL:(NSURL *)arg1 ;
-(id)initWithCIDURL:(id)arg1 ;
-(NSURL *)cidURL;
@end

