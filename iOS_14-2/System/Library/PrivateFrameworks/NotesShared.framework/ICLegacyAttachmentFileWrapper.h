/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)attachmentIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)cidURL;
-(id)initWithCoder:(id)arg1 ;
-(void)setCidURL:(NSURL *)arg1 ;
-(id)initWithCIDURL:(id)arg1 ;
@end

