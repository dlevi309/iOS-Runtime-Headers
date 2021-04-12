/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MFAttachmentPasteboardRepresentation.h>
@class NSData, NSString;


@protocol MFAttachmentPasteboardRepresentation
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * mimeType; 
@required
-(NSString *)name;
-(BOOL)isValid;
-(NSData *)data;
-(NSString *)mimeType;

@end


@class NSData, NSString;

@interface MFAttachmentPasteboardRepresentation : NSObject <NSSecureCoding, MFAttachmentPasteboardRepresentation> {

	NSData* _data;
	NSString* _name;
	NSString* _mimeType;

}

@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * mimeType;                      //@synthesize mimeType=_mimeType - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
-(id)initWithMFAttachment:(id)arg1 ;
@end

