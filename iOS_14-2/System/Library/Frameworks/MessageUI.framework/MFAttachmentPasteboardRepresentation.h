/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)mimeType;
-(NSString *)name;
-(BOOL)isValid;
-(NSData *)data;

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
-(NSString *)mimeType;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(id)initWithMFAttachment:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSString *)name;
-(BOOL)isValid;
-(NSData *)data;
-(id)initWithAttachment:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

