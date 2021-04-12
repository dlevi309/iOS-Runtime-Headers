/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * mimeSubtype; 
@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,readonly) unsigned long long totalTextSize; 
+(id)versionString;
+(id)copyNewMimeBoundary;
-(id)init;
-(id)attachments;
-(BOOL)isEncrypted;
-(NSString *)mimeType;
-(long long)numberOfAlternatives;
-(MFMimePart *)topLevelPart;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(id)partWithNumber:(id)arg1 ;
-(BOOL)isHTML;
-(id)attachmentURLs;
-(unsigned long long)totalTextSize;
-(unsigned)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2 ;
-(BOOL)hasEncryptedDescendantPart;
-(NSArray *)signers;
-(void)setSigners:(NSArray *)arg1 ;
-(void)setIsEncrypted:(BOOL)arg1 ;
-(id)textHtmlPart;
-(id)preferredBodyPart;
-(BOOL)isRich;
-(void)setTopLevelPart:(MFMimePart *)arg1 ;
-(long long)preferredAlternative;
-(void)setPreferredAlternative:(long long)arg1 ;
-(NSString *)mimeSubtype;
@end

