/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MFMessageBody.h>
#import <libobjc.A.dylib/ECMimePart.h>

@class NSString, MFMimePart, NSArray;

@interface MFMimeBody : MFMessageBody <ECMimePart> {

	MFMimePart* _topLevelPart;
	unsigned _preferredAlternative : 16;
	unsigned _numAlternatives : 16;
	long long _encryptedDescendantState;
	BOOL _isEncrypted;
	NSArray* _signers;

}

@property (nonatomic,retain) NSArray * signers;                               //@synthesize signers=_signers - In the implementation block
@property (assign,nonatomic) BOOL isEncrypted;                                //@synthesize isEncrypted=_isEncrypted - In the implementation block
@property (nonatomic,retain) MFMimePart * topLevelPart; 
@property (nonatomic,readonly) BOOL hasEncryptedDescendantPart; 
@property (nonatomic,copy,readonly) NSString * mimeSubtype; 
@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,readonly) unsigned long long totalTextSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)versionString;
+(id)copyNewMimeBoundary;
-(NSString *)mimeType;
-(id)attachments;
-(id)init;
-(unsigned long long)totalTextSize;
-(unsigned)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2 ;
-(BOOL)hasEncryptedDescendantPart;
-(BOOL)isHTML;
-(id)preferredBodyPart;
-(NSArray *)signers;
-(BOOL)isRich;
-(void)setSigners:(NSArray *)arg1 ;
-(void)setIsEncrypted:(BOOL)arg1 ;
-(id)textHtmlPart;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(BOOL)isEncrypted;
-(id)partWithNumber:(id)arg1 ;
-(id)attachmentURLs;
-(MFMimePart *)topLevelPart;
-(long long)numberOfAlternatives;
-(void)setTopLevelPart:(MFMimePart *)arg1 ;
-(long long)preferredAlternative;
-(void)setPreferredAlternative:(long long)arg1 ;
-(NSString *)mimeSubtype;
@end

